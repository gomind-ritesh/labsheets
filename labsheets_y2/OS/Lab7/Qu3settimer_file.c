#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

// Global variables
struct timeval start_time;
int file_descriptor;

// Signal handler function
void timer_handler(int signum) {
    struct timeval current_time;
    gettimeofday(&current_time, NULL);

    // Calculate elapsed time in seconds and microseconds
    long elapsed_seconds = current_time.tv_sec - start_time.tv_sec;
    long elapsed_microseconds = current_time.tv_usec - start_time.tv_usec;

    if (elapsed_microseconds < 0) {
        elapsed_microseconds += 1000000;
        elapsed_seconds--;
    }

    // Create the message to be written to the file
    char message[100];
    snprintf(message, sizeof(message), "Elapsed time: %ld seconds and %ld microseconds\n", 
             elapsed_seconds, elapsed_microseconds);

    // Write the message to the file
    write(file_descriptor, message, strlen(message));
}

int main() {
    // Open the file with the open system call
    file_descriptor = open("time_log.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1) {
        printf("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Get the start time of the program
    gettimeofday(&start_time, NULL);

    // Set up the signal handler for SIGALRM
    struct sigaction sa;
    sa.sa_handler = timer_handler;
    //sa.sa_flags = SA_RESTART;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);

    if (sigaction(SIGALRM, &sa, NULL) == -1) {
        printf("Error setting up signal handler");
        exit(EXIT_FAILURE);
    }

    // Set up the timer to trigger every 500 milliseconds
    struct itimerval timer;
    timer.it_value.tv_sec = 0;
    timer.it_value.tv_usec = 500000; // Initial delay
    timer.it_interval.tv_sec = 0;
    timer.it_interval.tv_usec = 500000; // Repeating interval

    if (setitimer(ITIMER_REAL, &timer, NULL) == -1) {
        printf("Error setting timer");
        exit(EXIT_FAILURE);
    }

    // Run for 30 seconds
    sleep(30);

    // Clean up
    close(file_descriptor);
    return 0;
}
