/*	Week 11 Lecture 1
	Example 3

	Using a for loop to input and output array values
*/

#include <stdio.h>


int main(void)
{
	/* 	Declare an array of integers */
	int Grades[5];
	int nCount;

	/* Populate the array */
	for(nCount = 0; nCount < 5; nCount++)
	{
		printf("\nPlease enter a value for array element %d : ",nCount);
		scanf("%d",&Grades[nCount]);
	}
	
	printf("\n\n");		/* Just a couple of lines to add a gap */
	
	/* Display the array */
	for(nCount = 0; nCount < 5; nCount++)	/* Note that reusing nCount */
	{
		printf("Array element %d has the value %d\n", nCount, Grades[nCount]);
	}

	return 0;
}
