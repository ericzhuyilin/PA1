/*
 * Filename: testpopulateTable
 * Author: Yilin Zhu
 * Userid: A15862322
 * Description: Unit test program to test the function hash().
 * Date: 2022 8.16
 * Sources of Help: Lecture slides, C documentation.
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "test.h"    /* For TEST() macro and stdio.h */
#include "pa1.h"

void testpopulateTable() {

  // My tests
  linkedListNode_t ** table = newLinkedListArray(2003);
  FILE *fptr = fopen("pa1file1.txt", "r");
  populateTable(table, fptr);
  TEST(strcmp((**(table + 693737%2003)).value, "abc") == 0);

}

/* 
 * Function Name: main()
 * Function prototype: int main();
 * Description: The test driver. Runs specified tests.
 * Side Effects: None
 * Error Conditions: None
 * Return Value: 0 on exit success.
 */
int main() {
  fprintf( stderr, "Testing hash...\n\n" );
  testpopulateTable();
  fprintf( stderr, "\nDone running tests.\n" );
  return 0;
}
