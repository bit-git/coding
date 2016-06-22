/*	Week 1 Semester 2 Lecture 2
	Example 1

	Using fopen to write a file
*/

#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "example1.dat"

int main(void)
{
	/* Declare a file pointer */
	FILE *ptrF1;

	int nCount;

	/* Note use of fprintf and standard stream pointers */

	fprintf(stdout,"Week 1 Semester 2 Lecture 2\nExample 1\n\nUsing fopen to write\n\n");

	ptrF1 = fopen(FILE_NAME, "w");		/* Note use of string literal for file name */

	if(ptrF1 == NULL)					/* Try using   if(!ptrF1)   instead */
	{
		fprintf(stderr,"Unable to open %s\n\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}

	for(nCount = 0; nCount < 20; nCount++)
		fprintf(ptrF1, "This is line %d\n", nCount);

	fclose(ptrF1);

	return 0;
}
