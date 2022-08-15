#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"

int checkTable(char* str, linkedListNode_t** hashtbl){
    linkedListNode_t *bucket = retrieveLinkedList(hashtbl, str);
    if(*bucket == NULL){
        return 0;
    }
    linkedListNode_t *curr = **bucket;
    while(curr != NULL){
        if(strcmp(str, curr.value) == 0){
            return 1;
	}
	curr = curr.next;
    }
    return 0;
}
