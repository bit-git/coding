/*	HCS Week 9 Lecture 2
	Example 3

	Using a switch ... case structure

	Note how multiple cases have been used for the same output
	Also, note how case 3 and 2 have been arranged
*/

#include <stdio.h>


int main(void)
{
	int nGradeValue;

	printf("Please enter your grade (0..15) : ");
	scanf("%d", &nGradeValue);

	switch(nGradeValue)
	{
		case 1:		printf("Sorry - you have failed\n");
					break;
		case 3: 	printf("This is a narrow fail\n");
		case 2: 	printf("Better luck with the resit\n");
					break;
		case 4:
		case 5:
		case 6:		printf("This is the equivalent of a Third\n");
					break;
		case 7:
		case 8:
		case 9:		printf("This is the equivalent of a 2:2\n");
					break;
		case 10: case 11: case 12:
					printf("This is the equivalent of a 2:1\n");
					break;
		case 13: case 14: case 15:
					printf("Congratulations, this is the equivalent of a First\n");
					break;
		default: printf("Not a valid input\n");
	}

	return 0;
}

