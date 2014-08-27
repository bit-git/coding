/* Week 11 Lecture 2
   Example 3
   
   Passing 2D array to a function
*/

void fnDisplayArray(int arnValues[][4]);

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Declare and populate the array */
    int arnVals[3][4] = { {8, 16, 9, 52},
                          {3, 15, 27, 6},
                          {14, 25, 2, 10} };
                          
    printf("Week 11 Lecture 2\nExample 3\n\nPassing 2D Array to a function\n\n");
	 
	 fnDisplayArray(arnVals);
 
 
  
  	 system("PAUSE");	
  	 return 0;
}

/* Array within the function must have number of
   columns included - rows can be ommited */
void fnDisplayArray(int arnValues[][4])
{
     /* Variables for the loops */
     int nRow, nCol;
     
     printf("\n\n");
     for(nRow = 0; nRow < 3; nRow++)
     {
              for(nCol = 0; nCol < 4; nCol++)
              {
                       printf("%5d",arnValues[nRow][nCol]);
              }
              printf("\n");
     }
     printf("\n\n");
}
