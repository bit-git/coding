/*	HCS Week 6 Lecture 1
	Example 7

	Pass by reference
*/

#include <stdio.h>

void swap(int *ptrFirst, int *ptrSecond);

int main(void)
{
	int nA, nB;

	nA = 5; nB =67;

	printf("nA is %d, nB is %d\n", nA, nB);

	swap(&nA, &nB);

	printf("Back from swap....\n");
	printf("nA is %d, nB is %d\n", nA, nB);

	return 0;
}

void swap(int *ptrFirst, int *ptrSecond)
{
	int nTemp;
	nTemp = *ptrFirst;
	*ptrFirst = *ptrSecond;
	*ptrSecond = nTemp;

	printf("The first value is %d, the second is %d\n", *ptrFirst, *ptrSecond);
}
