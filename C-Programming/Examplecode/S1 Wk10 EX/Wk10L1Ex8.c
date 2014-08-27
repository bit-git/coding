/*	HCS Week 6 Lecture 1
	Example 8

	Pointers
*/

#include <stdio.h>


int main(void)
{
	int nA;				// Declare an integer
	int *ptrPoint;		// Declare a pointer to an integer

	nA = 42;			// Assign a value to nA

	ptrPoint = &nA;		// Assign the address of nA to the pointer


	printf("Directly. nA has the value %d\n", nA);

	// Now print using the pointer - "dereferencing" it using the * symbol
	printf("Indirectly. nA has the value %d\n", *ptrPoint);

	// Now change the value directly
	nA = 124;

	printf("Directly. nA has the value %d\n", nA);

	// Now change the value via the pointer
	*ptrPoint = 256;

	printf("Directly. nA has the value %d\n", nA);


	return 0;
}
