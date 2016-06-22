/*	Week 11 Lecture 2
	Example 5
	
	Searching a 2D array
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 	 int arnSalaries[10][2] = {1, 10000, 2, 11000, 3, 12000, 4, 13000,
 	 	  							   5, 14000, 6, 15000, 7, 16000, 8, 17000,
 	 	  							   9, 18000, 10, 19000};
    int nRow, nCol;
    int nEmNo;
    char cFound = 'N';
    
 	 printf("Week 11 Lecture 2\nExample 5\n\nSearching a 2D array\n\n");
 	 
 	 /* First, print the array so that the contents can be seen */
 	 for(nRow = 0; nRow < 10; nRow++)
 	 {
		 printf("%4d %6d\n",arnSalaries[nRow][0], arnSalaries[nRow][1]);
    }
    printf("\n\n");
    
	 /* Now the search */
	 printf("Please enter the employee number : ");
	 scanf("%d", &nEmNo);
	 
	 for(nRow = 0; nRow < 10; nRow++)
	 {
	  			 if(nEmNo == arnSalaries[nRow][0])
	  			 {
				  			printf("\nEmployee found - has salary of %d\n"
							  						 		 		 , arnSalaries[nRow][1]);
		 		 		   cFound = 'Y';
		 		 		   nRow = 10; /* This is to break out of the loop */
		        }
    }
    
    if(cFound == 'N')
    {
	  			  printf("Sorry, employee not found - please try again\n");
    }
  
  system("PAUSE");	
  return 0;
}
