#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include "proc.h"
//#include <string.h>
//#include <stdio.h>

int
main(int argc, char *argv[]){
	if(fork()==0){
		//printf(1, "IO start\n");
		//mkdir("backup");
	    for (int i = 0; i < 10000000; ++i){
	    	printf(1, "1");
	    	
	    }
	    getpinfo(getpid());
	}
	else{
		//printf(1, "Add start\n");
		int val = 0;
        for (int i = 0; i < 1000000000; ++i){
        	//\printf(1, "Executed add loop %d\n", i);
            val += 1;
        }
        printf(1, "val: %d\n", val);
        getpinfo(getpid());
	}
	exit();
	return 0;
}