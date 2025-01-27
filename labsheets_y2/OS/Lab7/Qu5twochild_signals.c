
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>

// Global variables for child processes to keep track of counters
int C1 = 0;
int C2 = 1;

// Signal handler for SIGUSR1
void handle_sigusr1(int signum) {
    C1++;
    printf("Child %d received SIGUSR1: C1 = %d, C2 = %d\n", getpid(), C1, C2);
}

// Signal handler for SIGUSR2
void handle_sigusr2(int signum) {
    C2 *= 2;
    printf("Child %d received SIGUSR2: C1 = %d, C2 = %d\n", getpid(), C1, C2);
}

int main() {
    pid_t child1, child2;
    int status;

    // Fork first child
    child1 = fork();
    if (child1 == 0) {
    
        // First child process
        signal(SIGUSR1, handle_sigusr1);
        signal(SIGUSR2, handle_sigusr2);
        while (1) {
            pause(); // Wait for signals
        }
        
    } else if (child1 > 0) {
        // Fork second child
        child2 = fork();
        if (child2 == 0) {
            // Second child process
            signal(SIGUSR1, handle_sigusr1);
            signal(SIGUSR2, handle_sigusr2);
            while (1) {
                pause(); // Wait for signals
            }
        } else if (child2 > 0) {
            // Parent process
            int elapsed_time = 0;

            while (elapsed_time < 240) { // Total duration is 240 seconds (4 minutes)
                sleep(10); // Sleep for 10 seconds

                if (elapsed_time < 120) { // First 2 minutes
                    kill(child1, SIGUSR1); // Send SIGUSR1 to the first child
                    kill(child2, SIGUSR2); // Send SIGUSR2 to the second child
                } else { // Next 2 minutes (swap signals)
                    kill(child1, SIGUSR2); // Send SIGUSR2 to the first child
                    kill(child2, SIGUSR1); // Send SIGUSR1 to the second child
                }

                elapsed_time += 10;
            }

            // Terminate children after 4 minutes
            kill(child1, SIGTERM);
            kill(child2, SIGTERM);

            // Wait for children to finish
            waitpid(child1, &status, 0);
            waitpid(child2, &status, 0);

            printf("Parent: Exiting program.\n");
        } else {
            perror("Error: Fork failed for second child.");
            exit(EXIT_FAILURE);
        }
    } else {
        perror("Error: Fork failed for first child.");
        exit(EXIT_FAILURE);
    }

    return 0;
}
