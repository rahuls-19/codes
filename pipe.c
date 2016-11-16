#include <stdio.h>
#include <unistd.h>	
#define BUFSIZE 80	
main()
{
	int fd[2];
	int n=0;
	int i;
	char line[BUFSIZE];
	

	pipe(fd); 
	if (fork() == 0) {

		close(fd[0]); 
		for (i=0; i < 10; i++) {
                          scanf("%s",line);
			write(fd[1], line, BUFSIZE);
			printf("Child writes:");
			
			sleep(2);
		}
	}
	else {

		close(fd[1]); 
		for (i=0; i < 10; i++) {

			printf("\t\t\t Parent trying to read pipe\n");
			read(fd[0], line, BUFSIZE);
		
			printf("\t\t\t Parent reads: %s",line);
		}
	}
}


