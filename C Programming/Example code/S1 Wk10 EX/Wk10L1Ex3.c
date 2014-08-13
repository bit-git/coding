/* 	HCS Week 6 Lecture 1
	Example 3

	Variable Scope
*/

#include <stdio.h>

/* Declare a Global Valiable */
int nGlobal;

/* Function prototypes */
void function1(int, int);

int main(void)
{
	/* Declare a local variable */
	int nA, nB;

	/* Now give some values */
	nGlobal = 42;
	nA = 10;
	nB = 15;

	printf("Within main - nA is %d, nB is %d, nGlobal is %d\n\n", nA, nB, nGlobal);

	function1(nA, nB);

	printf("Back from the function - nA is %d, nB is %d, nGlobal is %d\n\n", nA, nB, nGlobal);



	return 0;
}


void function1(int nC, int nD)
{
	int nA, nB;
	nA = nC + nD;
	nB = nC + nGlobal;
	nGlobal = 1024;

	printf("Within function1() - nA is %d, nB is %d, nGlobal is %d\n\n", nA, nB, nGlobal);

}
