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
	//volatile int end=0;
	
	if(fork()!=0){
		//pid==3
		printf(1,"result is %d\n",fib(35));
		//end=1;
		printf(1,"ended\n");
	}
	else{
		//pid==4
		//int p_num=0;
		fork();
		fork();
		fork();
		for(int i=0;i<400;i++){
			int fd=open("test1_2.c", O_RDONLY);
			char buf[20];
			read(fd,buf,sizeof buf);
			sleep(1);
		}
		wait();
		wait();
		//printf(1,"exited\n");
		
	}
	
	wait();
	if(pid==getpid()){
		//wait();
		getpinfo(getpid());
	}
	exit();
	//wait();
	//getpinfo(getpid());
	//exit();
	
}