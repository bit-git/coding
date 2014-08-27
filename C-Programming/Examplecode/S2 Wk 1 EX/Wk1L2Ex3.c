/*	Week 1 Semester 2 Lecture 2
	Example 2

	Using fopen to read a file that was generated
	by Wk1L2Ex1.c
*/

#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "example1.dat"

int main(void)
{
	/* Declare a string to hold the input */
	char arcInput[BUFSIZ];

	/*	Declare the file pointer */
	FILE *ptrF1;

	fprintf(stdout, "Week 1 Semester 2 Lecture 2\nExample 2\n\nUsing fopen to read\n\n");

	ptrF1 = fopen(FILE_NAME, "r");

	while(fgets(arcInput, BUFSIZ, ptrF1))
		fprintf(stdout, "%s", arcInput); /* Try replacing this line - see tutorial sheet */

	printf("\nEnd of file encountered - closing %s\n\n", FILE_NAME);
	fclose(ptrF1);


	return 0;
}
