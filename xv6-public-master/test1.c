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
	
	if(fork()!=0){
		//pid==3
		fib(35);
	}
	else{
		//pid==4
		for(int i=0;i<300;i++){
			
			int fd=open("test1_2.c", O_RDONLY);
			char buf[20];
			read(fd,buf,sizeof buf);
			
			//printf(1,"a\n");

		}
	}
	wait();
	getpinfo(getpid());
	exit();
}