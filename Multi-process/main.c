#include <stdio.h>
#include <unistd.h>

int i = 0;

int main(){
	pid_t pid;
	pid = fork();
	while(1){
		if(pid == 0){
			i++;
			printf("Child process!");
			printf("	i:%d	wait 5 seccond\n",i);
			sleep(5);
		}
		else if(pid > 0){
			i++;
			printf("Parent Process!");
			printf("	i:%d	 wait 1 seccond\n",i);
			sleep(1);
		}
		else
			printf("Error!\n");
	}
}
