/*	Week 11 Lecture 2
	Example 4
	
	Extracting a sub array and displaying
*/

#include <stdio.h>
#include <stdlib.h>

void fnDisplaySubset(int arnVals[][100], int, int, int, int);

int main(int argc, char *argv[])
{
 	 /* Start with a large array */
 	 int arnValues[100][100];
 	 int nRow, nCol;
 	 int nStartRow, nStartCol;
 	 int nWidth, nDepth;
 	 int nCount = 0;			/* Simple counter for populating the large array */
 	 
 	 printf("Week 11 Lecture 2\nExample 4\n\nDisplating an array subset\n\n");
 	 /* Put something into the array */
  	 for(nRow = 0; nRow <100; nRow++)
  	 {
			 for(nCol = 0; nCol <100; nCol++)
 	  		 {
	  			 arnValues[nRow][nCol] = nCount++;
			 }
    }
	 
	 printf("Please enter the starting Column number : ");
	 scanf("%d", &nStartCol);
	 
	 printf("Please enter the starting Row number : ");
	 scanf("%d", &nStartRow);
	 
	 printf("Please enter the number of columns to display : ");
	 scanf("%d", &nWidth);
	 
	 printf("Please enter the number of rows to display : ");
	 scanf("%d", &nDepth); 
	 
	 fnDisplaySubset(arnValues, nStartCol, nStartRow, nWidth, nDepth);
 
  	 
  	 
  system("PAUSE");	
  return 0;
}

void fnDisplaySubset(int arnVals[][100], int nSC, int nSR, int nW, int nD)
{
 	   int nRow, nCol;
	  	
	  	printf("\n\n");
		for(nRow = nSR; nRow < nSR + nD; nRow++)
		{
		 			for(nCol = nSC; nCol < nSC + nW; nCol++)
					{
					 			printf("%5d", arnVals[nRow][nCol]);
					}
					printf("\n");
		}
		printf("\n\n");
}
