/* 	Week 11 Lecture 1
	Example 6

	Reading from beyond the end of an array
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double Array[10];
	int nCount;

	/* First populate the array correctly */
	printf("\n\n");
	for(nCount = 0; nCount < 10; nCount++)
	{
		Array[nCount] = pow((double)nCount, 2.0);
	}

	/* Now output the values within the aray */
	for(nCount = 0; nCount < 10; nCount++)
	{
		printf("Array[%2d] holds the value %lf\n", nCount, Array[nCount]);
	}

	/* Now, output again but going beyond the end of the array */
	printf("\n\n");
	for(nCount = 0; nCount < 20; nCount++)
	{
		printf("Array[%2d] holds the value %lf\n", nCount, Array[nCount]);
	}

	return 0;
}
