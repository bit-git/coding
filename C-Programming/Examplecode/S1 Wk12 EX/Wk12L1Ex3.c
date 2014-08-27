/*	Week 12 lecture 1
	Example 3

	Exchange Sort
*/

#include <stdio.h>

#define TRUE 1		/* Even though C does not have a Boolean data type */
#define FALSE 0		/* it is quite easy to define True and False */
					/* Note that there is no equals */

int main(void)
{
	float arfValues[20] = {32.25, 167.67, 34.98, 56.75, 126.76, 1.67, 17.89, 1025.87,
						   207.55, 13.21, 99.12, 583.76, 471.21, 763.98, 12.98, 167.67,
						   207.55, 14.89, 1.67, 2031.78};
	float fTemp;
	int nCount, nMoves, nOutOrder, nNumValues;

	nNumValues = 20;
	nOutOrder = TRUE;
	nMoves = 0;

	printf("\n\nWeek 12 Lecture 1\nExample 3\n\nExchange Sort\n\n");

	while(nOutOrder && nNumValues > 0)
	{
		nOutOrder = FALSE;
		for(nCount = 0; nCount < nNumValues -1; nCount++)
		{
			if(arfValues[nCount] > arfValues[nCount +1])
			{
				/* Swap the values */
				fTemp = arfValues[nCount + 1];
				arfValues[nCount + 1] = arfValues[nCount];
				arfValues[nCount] = fTemp;
				nOutOrder = TRUE;
				nMoves++;
			}
		}
		nNumValues--;
	}

	printf("The sorted list is \n");
	for(nCount = 0; nCount < 20; nCount++)
		printf("%8.2f\n", arfValues[nCount]);
	printf("\n %d moves were required to sort this list\n\n", nMoves);


	return 0;
}
