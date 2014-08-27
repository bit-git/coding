/*	Week 11 Lecture 1
	Example 5

	Using a for loop to input and output array values
	Also calculate the average with correct casting
*/

#include <stdio.h>


int main(void)
{
	/* 	Declare an array of integers */
	int Grades[5];
	int nCount;
	int nTotal = 0;		/* Declare and initialise the value */
	float fAverage;

	/* Populate the array */
	for(nCount = 0; nCount < 5; nCount++)
	{
		printf("\nPlease enter a value for array element %d : ",nCount);
		scanf("%d",&Grades[nCount]);
		nTotal += Grades[nCount];
	}
	
	printf("\n\n");		/* Just a couple of lines to add a gap */
	
	/* Display the array */
	for(nCount = 0; nCount < 5; nCount++)	/* Note that reusing nCount */
	{
		printf("Array element %d has the value %d\n", nCount, Grades[nCount]);
	}
	
	/* Calculate the average */
	fAverage = (float)nTotal / 5;
	
	/* Output the average grade */
	printf("\nThe average grade value is %f\n\n", fAverage);

	return 0;
}
