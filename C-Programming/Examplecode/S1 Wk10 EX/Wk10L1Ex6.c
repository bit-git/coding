/*	HCS Week 6 Lecture 1
	Example 6

	Simple Swap
*/

#include <stdio.h>

void swap(int, int);

int main(void)
{
	int nA, nB;

	nA = 5; nB = 67;

	printf("nA is %d, nB is %d\n", nA, nB);

	swap(nA, nB);

	printf("After swap.... \n");
	printf("nA is %d, nB is %d\n", nA, nB);

	return 0;
}

void swap(int nA, int nB)
{
	int nTemp;
	nTemp = nA;
	nA = nB;
	nB = nTemp;

	printf("nA is now %d, nB is now %d\n", nA, nB);
}
