#include "mapreduce.h"
#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

int M_WORKERS = 2;
int R_WORKERS = 2;
char * DIR_NAME;
int main(int argc, char** argv){
	int option = 0;
	int d_flage = 0;
	/// The below for loop is not nessasary for us to assurt that 
	/// we have a directory name.
	//if(argc == 1){
		//// print an error message sying we need -d dirname
		//printf("you got it write\n");
		//exit (1);
	//}
	
	
	
	//*** Note this allows multiples of the same arguments (note sure if we care)
	// This loopes over the argv and assines the variables specified by user.  
	while ((option = getopt(argc, argv,"d:m:r:")) != -1) {
        switch (option) {
            case 'd' : DIR_NAME = optarg; 
				// d_flage is set to one to assurt that a directorty name
				// has been passed.
				d_flage = 1;
				//fprintf(stderr,"%s\n", DIR_NAME);
				break;
            case 'm' : M_WORKERS = atoi(optarg);
				fprintf(stderr,"%d\n", M_WORKERS);
				break;
			case 'r' : R_WORKERS = atoi(optarg);
				fprintf(stderr,"%d\n", R_WORKERS);
				break;	
             default:  
				// If you have an argument that is not -d, -m, -r this case is called.
				//*** this implementation may be wastfull because is is going 
				// to an unbuffered print streem. 
                fprintf(stderr, "Only -d for a directory name, -m for the");
                fprintf(stderr, "number of map workers, and -r for number ");
                fprintf(stderr,"of reduce workers are valud arguments.\n");
				exit (1);
        }
    }
    if (d_flage == 0){
		// if d_flage has not been set then we dont have a directory name.
		fprintf(stderr,"-d for a directory name is a required argument.\n");
		exit (1);
		}
    
	return 0;
	}
	

/*
 * Takes a chunk of text and generates zero or more
 * Pair values, which it writes to outfd.
 *
 * Precondition: chunk is a null-terminated string.
 */
void map(const char *chunk, int outfd){
	
	
	}

///*
 //* Takes a key and list of values, and returns a new
 //* Pair.
 //*
 //* Precondition: key and all strings in values are null-terminated.
 //*/
//Pair reduce(const char *key, const LLValues *values){
	
	//return NULL;
	//} 
