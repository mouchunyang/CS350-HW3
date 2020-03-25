#include "types.h"
#include "stat.h"
#include "user.h"
#include ""

int
main(int argc, char *argv[]){
	if(fork()==0){
	    for (int i = 0; i < 100; ++i){
	    	const char filename = "output.txt";
            FILE *fp = fopen(filename, "w+");
            if (fputs( "abdefgh", fp ) < 0){
                close();
            }
            close();
	    }
	    getpinfo();
	}
	else{
		int val = 0;;
        for (int i = 0; i < 100; ++i){
            val += 1;
        }
        getpinfo();
	}
	return 0;
}