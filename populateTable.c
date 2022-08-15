#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "pa1.h"
#define MAXLEN 30

void populateTable(linkedListNode_t** hashtbl, FILE* dataFile){
    char readbuf[BUFSIZ];
    FILE *fin;
    if(dataFile == NULL){
	perror("Failed to read data file.");
	return EXIT_FAILURE;
    }
    while(fgets(readbuf, MAXLEN, dataFile)){
	int index = strchr(readbuf, "\n");
	readbuf[index] = NULL;
	for(int i = 0; readbuf[i] != NULL; i++){
	    readbuf[i] = tolower(str[i]);
	}
	llTableAddString(hashtbl, readbuf);
    }
    
        
}
