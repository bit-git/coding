/*	Week 11 Lecture 1
	Example 2

	Using a for loop to output array values
*/

#include <stdio.h>


int main(void)
{
	/* 	Declare an array of integers */
	int Grades[5];
	int nCount;

	/* Populate the array */
	Grades[0] = 98;
	Grades[1] = 87;
	Grades[2] = 43;
	Grades[3] = 67;
	Grades[4] = 17;

	for(nCount = 0; nCount < 5; nCount++)
	{
		printf("Array element %d has the value %d\n", nCount, Grades[nCount]);
	}

	return 0;
}
