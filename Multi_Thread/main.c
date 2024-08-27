#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

int val = 0;

void *printHello(void *threadid){
	long tid;
	tid = (long)threadid;
	for(int i=0;i<10;i++){
		val++;
		printf("Thread #%ld!, val=%d\n", tid, val);
		sleep(1);
	}
	pthread_exit(NULL);
}

int main(int argc, char *argv[]){
	pthread_t threads[NUM_THREADS];
	long t;
	for(t = 0; t < NUM_THREADS; t++){
		printf("IN main: creating thread %ld\n", t);
		pthread_create(&threads[t], NULL, printHello, (void *)t);
		sleep(2);
	}
	pthread_exit(NULL);
}
