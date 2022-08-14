#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pa1.h"

int checkTable(char* str, linkedListNode_t** hashtbl){
    linkedListNode_t *target = retrieveLinkedList(hashtbl, str);
    if(*target == NULL){
        return 0;
    }
    while(*target != NULL){
        if((**target).value == strcpy())
    }
}
