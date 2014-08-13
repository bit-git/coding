/*	Week 12 Lecture 2
	Example 4

	Variables and memory locations
*/

#include <stdio.h>

int main(void)
{
	/* Declare some variables */
	int 	nInteger;  	/* Note how tabs have been added to */
	float 	fFloat;		/* line things up nicely */
	double 	dDouble;
	char 	cChar;

	/* OK, not the best names */ 

	printf("\nWeek 12 Lecture 2\nExample 4\n\nVariables and memory locations\n\n");

	/* Assign some values */
	
	nInteger = 42;		
	fFloat = 15501.78;
	dDouble = 67.78954;
	cChar = 'Q';			/* Note, this is a not a string */

	/* Print out the values */
	printf("\n%4d %10.2f %10.5lf %3c\n\n", nInteger, fFloat, dDouble, cChar);

	/* Now output their memory addresses 
	   the %p format specifier is for pointers i.e memory addresses */
	printf("%p  %p %p %p\n\n", &nInteger, &fFloat, &dDouble, &cChar);

	/* Now output the number of bytes that each uses */
	printf("%3ld %3ld %3ld %3ld\n\n", sizeof(nInteger), sizeof(fFloat), sizeof(dDouble), sizeof(cChar));


	return 0;
}
