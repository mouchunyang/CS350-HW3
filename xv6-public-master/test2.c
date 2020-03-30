#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include "proc.h"
//#include <string.h>
//#include <stdio.h>

int fib(int i){
	if(i<2){
		return i;
	}
	else{
		return fib(i-1)+fib(i-2);
	}
}

int
main(int argc, char *argv[]){
	int pid=getpid();
	volatile int end=0;

	if(fork()!=0){
		//pid==3
		printf(1,"result is %d\n",fib(35));
		end=1;
		printf(1,"ended\n");
	}
	else{
		//pid==4
		while(end==0){
			//printf(1,"fork new\n");
			fork();
		}
		printf(1,"exited\n");
		//exit();
	}
	//wait();
	if(getpid()==pid){
		getpinfo(getpid());
	}
	exit();
}