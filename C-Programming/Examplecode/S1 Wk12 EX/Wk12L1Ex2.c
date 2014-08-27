/*	Week 12 Lecture 1
	Example 2
	
	Selection Sort with array to show intermediate values
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	/* 2D Array to hold intermediate values */
	float arfSteps[20][20];	/* To hold the array after each pass */
	
	/* Declare and populate the array */
	float arfValues[20] = {32.25, 167.67, 34.98, 56.75, 126.76,
    	 					     1.67, 17.89, 1025.87, 207.55, 13.21,
    		 					  99.12, 583.76, 471.21, 763.98, 12.98,
    		 					  167.67, 207.55, 14.89, 1.67, 2031.78};
    		 					  
   	float fMinVal, fTemp;
   	int nMinValPosition;
	int nCount1, nCount2, nCount3;
	int nMoves;
   	int nCol = 0;
	int nRow;
   
   
   	printf("Week 12 Lecture 1\nExample 2\n\nSelection Sort showing intermediate values\n\n");

	/* Copy the unsorted array into the first column of 
	   arfSteps */
	for(nCount3 = 0; nCount3 < 20; nCount3++)
		arfSteps[nCount3][nCol] = arfValues[nCount3];
	nCol++;


   	/* Output the array so that it can be seen */
   	for(nCount1 = 0; nCount1 < 20; nCount1++)
   		printf("%9.2f\n", arfValues[nCount1]);
   			  
   	for(nCount1 = 0; nCount1 < 20; nCount1++)
   	{
		fMinVal = arfValues[nCount1];
		nMinValPosition = nCount1;
			
		for(nCount2 = nCount1 + 1; nCount2 < 20; nCount2++)
		{
			if(arfValues[nCount2] < fMinVal)
			{
				fMinVal = arfValues[nCount2];
				nMinValPosition = nCount2; 
	 		} 
	 		/* Perform the switch */
			if(fMinVal < arfValues[nCount1])
			{
				fTemp = arfValues[nCount1];
				arfValues[nCount1] = arfValues[nMinValPosition];
				arfValues[nMinValPosition] = fTemp;
				nMoves++;
			}
		}
		/* Copy this partially sorted array into the next column
		   of arfSteps */ 
		for(nCount3 = 0; nCount3 < 20; nCount3++)
			arfSteps[nCount3][nCol] = arfValues[nCount3];
		nCol++; 
   	}
   
   	printf("The sorted list, in ascending order, is:\n");
   	for(nCount1 = 0; nCount1 < 20; nCount1++)
   		printf("%9.2f \n", arfValues[nCount1]);

	printf("The steps array is containing \n");
	for(nRow = 0; nRow < 20; nRow++)
	{
		for(nCol = 0; nCol < 20; nCol++)
		{
			printf("%9.2f", arfSteps[nRow][nCol]);
		}
		printf("\n");
	}

	
	printf("\n %d moves were made to sort this list\n", nMoves);
	  
  	system("PAUSE");	
  	return 0;
}
