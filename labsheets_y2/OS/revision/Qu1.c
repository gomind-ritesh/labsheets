#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<fcntl.h>

#define BUFFER_SIZE 1
int main(){

    int fd;
    char buffer[1];
    
    fd=open("words.txt",O_RDONLY );
    if (fd<0){
        printf("Failed to open file");
        return 1;
    }
    

    pid_t pid1 ,pid2;
    pid1 = fork();
    pid2 = fork();
    
    if (pid1 ==0)
    { 
      if (pid2 == 0)
           {
           //grandchild process
            close(fd);
            return 0; // Exit immediately
           }
      else
      {
      
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
      
      }
    else{ 
      if (pid2 ==0 )
      { 
      // first child process
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
      }
      
      else
      {
      //parent process
      
            wait(NULL); // Wait for both children to finish
            wait(NULL);
            char lastchar;
            lseek(fd, -1, SEEK_END);
            read(fd,&lastchar,1);
            printf("last char %c",lastchar);
        close(fd);
            
            
      }
      }
      }
    
      
    
