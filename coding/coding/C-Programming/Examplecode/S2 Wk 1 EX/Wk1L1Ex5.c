/*	Week 1 Semester 2 Lecture 1
	Example 5

	Testing string length with a function
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* Function Prototypes */
void fnCopyString(char *, char *, int);

	
#define STR_LEN 10

int main(void)
{
	char arcInBuff[BUFSIZ];
	char arcString1[STR_LEN];

	printf("Week 1 Semester 2 Lecture 1\nExample 5\n\nString test with function\n\n");

	printf("Please enter a string : ");
	scanf("%s", arcInBuff);

	fnCopyString(arcInBuff, arcString1, STR_LEN);

	printf("The final string is %s\n\n", arcString1);

	return 0;
}

/*	Function definitions */

/* 	fnCopyString
	This function accepts three arguments,
	The string to be tested and the destination string
	It copies nChars characters from the source
	to the destination
*/
void fnCopyString(char *ptrSource, char *ptrDest, int nChars)
{
	int nCount;
	for(nCount = 0; nCount < nChars -1; nCount++)
		*ptrDest++ = *ptrSource++;
	ptrDest = '\0';
}
