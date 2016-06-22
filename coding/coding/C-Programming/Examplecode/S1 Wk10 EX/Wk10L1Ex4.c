/*	HCS Week 6 Lecture 1
	Example 4

	Nesting for loops
*/

#include <stdio.h>

int main(void)
{
	int nRow, nCol, nTableSize;

	printf("\n\nPlease enter the value for the table size : ");
	scanf("%d",&nTableSize);
	
	printf("\n\n");

	for(nRow = 1; nRow <= nTableSize; nRow++)
	{
		for(nCol = 1; nCol <= nTableSize; nCol++)
			printf("%6d", nRow * nCol);

		printf("\n");
	}
	printf("\n\n");

	return 0;
}
