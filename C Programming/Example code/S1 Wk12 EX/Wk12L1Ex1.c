/*	Week 12 Lecture 1
	Example 1
	
	Selection Sort */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	/* Declare and populate the array */
	float arfValues[20] = {32.25, 167.67, 34.98, 56.75, 126.76,
    	 					     1.67, 17.89, 1025.87, 207.55, 13.21,
    		 					  99.12, 583.76, 471.21, 763.98, 12.98,
    		 					  167.67, 207.55, 14.89, 1.67, 2031.78};
    		 					  
   	float fMinVal, fTemp;
   	int nMinValPosition;
	int nCount1, nCount2, nCount3;
	int nMoves;
	int nRow;
   
   
   	printf("Week 12 Lecture 1\nExample 1\n\nSelection Sort\n\n");


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
   	}
   
   	printf("The sorted list, in ascending order, is:\n");
   	for(nCount1 = 0; nCount1 < 20; nCount1++)
   		printf("%9.2f \n", arfValues[nCount1]);

	printf("\n %d moves were made to sort this list\n", nMoves);
	  
  	system("PAUSE");	
  	return 0;
}
