#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include "proc.h"
//#include <string.h>
//#include <stdio.h>

int fib(int i){
	if(i<=1)
		return i;
	return fib(i-1)+fib(i-2);
}

int
main(int argc, char *argv[]){
	int pid=getpid();
	fork();
	if(pid==getpid()){
		//if it is parent process
		fib(35);
	}
	else{
		//if it is child process
		for(int i=0;i<200;i++){
			printf(1,"%d\n",i);
		}
	}
	wait();
	getpinfo(getpid());
	exit();
}