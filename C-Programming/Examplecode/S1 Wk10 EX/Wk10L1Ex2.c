/*	HCS Week 6 Lecture 1
	Example 2

	Increment and Decrement Example
*/

#include <stdio.h>

int main(void)
{
	int nCount, nX, nY;

	nCount = 5;
	nX = nY = 0;

	printf("nCount is %d, nX is %d, nY is %d\n\n", nCount, nX, nY);

	nX = ++nCount;
	nY = nCount++;

	printf("nCount is %d, nX is %d, nY is %d\n\n", nCount, nX, nY);

	return 0;
}
