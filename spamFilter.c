#include <stdio.h>
#include <stdlib.h>
#include "pa1.h"

int main(int argc, char* argv[]){
  `
  FILE *fptr = fopen(, "r");
  linkedListNode_t ** tbl = newLinkedListArray(DEFAULT_SIZE);
  populateTable(arr, fptr);
  launchUserQuery(tbl);
  cleanup(tbl);
  fclose(fptr);
}
