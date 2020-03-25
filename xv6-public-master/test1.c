#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include <string.h>
//#include <stdio.h>

int
main(int argc, char *argv[]){
	if(fork()==0){
		mkdir("backup");
	    for (int i = 0; i < 100; ++i){
	    	//printf(1, "Executed io loop %d\n", i);
	    	char* buf = "abcde";
            int fd = open("backup", O_RDWR);
            write (fd, buf, 512);
            close(fd);
	    }
	    getpinfo(getpid());
	    //exit();
	}
	else{
		int val = 0;;
        for (int i = 0; i < 100; ++i){
        	//printf(1, "Executed add loop %d\n", i);
            val += 1;
        }
        getpinfo(getpid());
	}
	exit();
	return 0;
}