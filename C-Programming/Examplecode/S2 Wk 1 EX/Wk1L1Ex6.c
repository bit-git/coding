/*	Week 1 Semster 1 Lecture 1
	Example 6

	Using scanf("%10s" .....
*/

#include <stdio.h>

#define STR_LEN 10

int main(void)
{
	char arcString1[STR_LEN];

	printf("Week 1 Semester 2 Lecture 1\nExample 6\n\nUsing scanf to limit input\n\n");

	printf("Please enter a long string ; ");
	scanf("%10s", arcString1);	/* 	Does not seem possible to use constant
									or a variable to specify the width */

	printf("The string has been limited to %s\n\n", arcString1);


	return 0;
}
