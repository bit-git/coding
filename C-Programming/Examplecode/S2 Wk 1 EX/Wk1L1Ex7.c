/*	Week 1 Semester 2 Lecture 1
	Example 7

	Use of fgets
*/

#include <stdio.h>
#include <string.h>

#define STR_LEN 10

int main(void)
{
	/*	Declare a string variable */
	char arcString1[STR_LEN];

	printf("Week 1 Semester 2 lecture 1\nExample 7\n\nUse of fgets\n\n");

	printf("Please enter a long string : ");
	fgets(arcString1, STR_LEN, stdin);

	printf("The accepted string is %s\n\n", arcString1);

	return 0;
}
