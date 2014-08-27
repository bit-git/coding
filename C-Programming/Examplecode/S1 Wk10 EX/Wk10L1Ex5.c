/*	HCS Week 6 Lecture 1
	Example 5

	Passing values to functions
*/

#include <stdio.h>

int multiply(int, int);		// prototype

int main(void)
{
	int nTotal, nNum1, nNum2;

	nNum1 = 3; nNum2 = 5;

	nTotal = multiply(nNum1, nNum2);   /* The variables between the
									   brackets are the arguments */

	printf("The result is %d\n", nTotal);

	return 0;
}

int multiply(int nFirst, int nSecond)	/* These are the parameters */
{
	return nFirst * nSecond;
}
