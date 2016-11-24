#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(){
	pid_t pid;
	int i;
	printf("Before using fork\n");
	pid = fork();
	if(pid == 0){
		printf("it's child process\n");
		while(i<10){
			printf("Child process %d : \n ",i);
			i++;
			sleep(1);
			}
		}
	else{
                printf("it's parent process\n");
                while(i<20){
                        printf("Parent process %d : \n ",i);
                        i++;
			sleep(1);
                        }
                }
	return 0;
}

