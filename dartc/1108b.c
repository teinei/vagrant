/*
Activity: correct simple errors in loops with missing braces
 Bookmark this page
Taskgrader (External resource)  (1.0 points possible)
*/
//not finished
#include <stdio.h>

int main(void) {

  int i;

  printf("+");
  for (i = 0; i < 23; i++)
    printf("-");
  printf("+\n");

  for (i = 0; i < 3; i++)
    printf("| o | X | o | X | o | X |");
  printf("\n");
  printf("| X | o | X | o | X | o |");
  printf("\n");

  printf("+");
  for (i = 0; i < 23; i++)
    printf("-");
  printf("+");

  return(0);
}
/*
The desired output is:

+-----------------------+                                                       
| o | X | o | X | o | X |                                                       
| X | o | X | o | X | o |                                                       
| o | X | o | X | o | X |                                                       
| X | o | X | o | X | o |                                                       
| o | X | o | X | o | X |                                                       
| X | o | X | o | X | o |                                                       
+-----------------------+ 
 */
