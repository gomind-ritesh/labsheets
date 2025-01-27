#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1

int main() {
    int fd;
    char buffer[BUFFER_SIZE];
    
    fd = open("words.txt", O_RDONLY);
    if (fd < 0) {
        printf("Failed to open input file");
        return 1;
    }

    pid_t pid1, pid2;

    pid1 = fork();
    if (pid1 == -1) {
        printf("Failed to fork");
        return 1;
    }
    
    if (pid1 == 0) {
        // First child process
        pid2 = fork();
        if (pid2 == -1) {
            printf("Failed to fork");
            return 1;
        }

        if (pid2 == 0) {
            // Grandchild process
            close(fd);
            return 0; // Exit immediately
        } else {
            // Second child process
            char vowels[] = {'a', 'e', 'i', 'o', 'u'};
            int fv = open("vowels.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
            if (fv < 0) {
                perror("Failed to open vowels file");
                return 1;
            }

            while (read(fd, buffer, BUFFER_SIZE) > 0) {
                for (int i = 0; i < 5; i++) {
                    if (buffer[0] == vowels[i]) {
                        if (write(fv, buffer, BUFFER_SIZE) != BUFFER_SIZE) {
                            perror("Error writing to vowels file");
                        }
                        break;
                    }
                }
            }

            close(fv);
            close(fd);
            return 0;
        }
    } else {
        // Parent process
        pid2 = fork();
        if (pid2 == -1) {
            printf("Failed to fork");
            return 1;
        }

        if (pid2 == 0) {
            // Third child process
            char vowels[] = {'a', 'e', 'i', 'o', 'u'};
            int fc = open("consonants.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
            if (fc < 0) {
                printf("Failed to open consonants file");
                return 1;
            }

            while (read(fd, buffer, BUFFER_SIZE) > 0) {
                int is_vowel = 0;
                for (int i = 0; i < 5; i++) {
                    if (buffer[0] == vowels[i]) {
                        is_vowel = 1;
                        break;
                    }
                }

                if (!is_vowel) {
                    if (write(fc, buffer, BUFFER_SIZE) != BUFFER_SIZE) {
                        printf("Error writing to consonants file");
                    }
                }
            }

            close(fc);
            close(fd);
            return 0;
        } else {
            // Parent process continues
            close(fd);
            wait(NULL); // Wait for both children to finish
            wait(NULL);
        }
    }

    return 0;
}
