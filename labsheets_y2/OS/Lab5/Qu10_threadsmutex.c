#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <fcntl.h>

#define NUM_ANGLES 3

// Mutex and condition variable for thread synchronization
pthread_mutex_t mylock;
pthread_mutex_t cond;
int remaining_threads;
int fd; // Global file descriptor

int remaining_threads = 2;

// Structure to pass multiple arguments to threads
typedef struct {
    double **array;
    int index;
} ThreadData;

// Thread functions
void *mycos(void *arg);
void *sine(void *arg);

// Function to be called when the last thread finishes
void close_file_if_last_thread() {
    pthread_mutex_lock(&cond);
    remaining_threads--;
    if (remaining_threads == 0) {
        close(fd);
        printf("File closed successfully.\n");
    }
    pthread_mutex_unlock(&cond);
}

int main() {
    char buffer[1024];
    double y, x;
    double **array;

    // Initialize mutex and condition variable
    pthread_mutex_init(&mylock, NULL);
    pthread_mutex_init(&cond, NULL);

    // Set initial number of remaining threads
    //remaining_threads = 2;

    // Opening file
    fd = open("angles.dat", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    if (fd < 0) {
        printf("Failed to open the file");
        return 1;
    }

    // Allocate memory
    array = malloc(sizeof(double*) * NUM_ANGLES);
    for (int a = 0; a < NUM_ANGLES; a++) {
        array[a] = malloc(sizeof(double) * 3);
    }

    pthread_t tcos;
    pthread_t tsine;

    for (int i = 0; i < NUM_ANGLES; i++) {
        printf("Enter angle in degrees: ");
        scanf("%lf", &y);
        x = y * (3.141592653589793 / 180.0);
        array[i][0] = x;

        int len = snprintf(buffer, sizeof(buffer), "%lf\t", x);
        if (write(fd, buffer, len) != len) {
            perror("Error writing to file");
        }
    }

    // Prepare thread data
    ThreadData data_cos = { array, 0 };
    ThreadData data_sine = { array, 1 };

    pthread_create(&tcos, NULL, mycos, &data_cos);
    pthread_create(&tsine, NULL, sine, &data_sine);

    // Wait for threads to complete
    pthread_join(tcos, NULL);
    pthread_join(tsine, NULL);

    // Destroy mutex and condition variable
    pthread_mutex_destroy(&mylock);
    pthread_mutex_destroy(&cond);

    // Free allocated memory
    for (int b = 0; b < NUM_ANGLES; b++) {
        free(array[b]);
    }
    free(array);

    printf("Parent thread exiting\n");
    return 0;
}

void *sine(void *arg) {
    char buffer[1024];
    ThreadData *data = (ThreadData *)arg;
    double **val = data->array;
    int numrows = NUM_ANGLES;

    pthread_mutex_lock(&mylock);

    for (int i = 0; i < numrows; i++) {
        double tval = val[i][0];
        double term, sum;
        int n;

        term = tval;
        sum = term;

        for (n = 3; n <= 15; n += 2) {
            term *= -tval * tval / ((n - 1) * n);
            sum += term;
        }
        val[i][1] = sum;

        int len = snprintf(buffer, sizeof(buffer), "%lf\t", sum);
        if (write(fd, buffer, len) != len) {
            perror("Error writing to file");
        }
    }
    pthread_mutex_unlock(&mylock);

    close_file_if_last_thread();
    pthread_exit(NULL);
}

void *mycos(void *arg) {
    char buffer[1024];
    ThreadData *data = (ThreadData *)arg;
    double **val = data->array;
    int numrows = NUM_ANGLES;

    pthread_mutex_lock(&mylock);

    for (int i = 0; i < numrows; i++) {
        double tval = val[i][0];
        double term, sum;
        int n;

        term = 1;
        sum = term;

        for (n = 2; n <= 16; n += 2) {
            term *= -tval * tval / ((n - 1) * n);
            sum += term;
        }
        val[i][2] = sum;

        int len = snprintf(buffer, sizeof(buffer), "%lf\t", sum);
        if (write(fd, buffer, len) != len) {
            printf("Error writing to file");
        }
    }
    pthread_mutex_unlock(&mylock);

    close_file_if_last_thread();
    pthread_exit(NULL);
}
