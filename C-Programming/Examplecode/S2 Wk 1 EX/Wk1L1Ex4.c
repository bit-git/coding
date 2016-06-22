/*	Week 1 Semester 2 Lecture 1
	Example 4

	Testing length of input string
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_LEN 10		/* 	Small value for ease of testing.
							Max 9 characters */

int main(void)
{
	/* 	Declare a number of char arrays for the strings */
	char arcInBuff[BUFSIZ];		/* 	This is a constant that 
									is defined within stdio.h */
	char arcString1[STR_LEN];

	printf("Week 1 Semester 1 Lecture 1\nExample 4\n\nTesting length of input string\n\n");

	printf("Please enter a string : ");
	scanf("%s", arcInBuff);

	if(strlen(arcInBuff) > 9)	/* Note how strlen function embedded within test */
	{
		printf("\n\tSorry, too many characters entered\n\n");
		exit(1);
	}
	else
	{
		strcpy(arcString1, arcInBuff);
		printf("Entered string is %s\n\n",arcString1);
	}



	return 0;
}
