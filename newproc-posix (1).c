/**
 * This program forks a separate process using the fork()/exec() system calls.
 *
 Written by Kevin Koscica by modifying existing code from the CH3 src
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
pid_t pid;

	/* fork a child process */
	pid = fork();
	int n=35; /*hardcodes a number for n instead of using user input*/
	if (pid < 0) { /* error occurred */
		fprintf(stderr, "Fork Failed\n");
		return 1;
	}
	else if (pid == 0) { /* child process */
	while(n!=1){
		if(n%2==0){
			n=n/2;
			printf("I am the child %d\n",n);
		}
		else if(n%2==1){
			n=3*(n)+1;
			printf("I am the child %d\n",n);
		}
		
}
	printf("I am the child %d\n",n);
		execlp("/bin/ls","ls",NULL);
}
	else { /* parent process */
		/* parent will wait for the child to comple	te */
		printf("I am the parent %d\n",pid);
		wait(NULL);
		
		printf("Child Complete\n");
	}
    
    return 0;
}
