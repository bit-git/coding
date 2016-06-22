/*	Week 12 Lecture 2
	Example 6

	Inputting strings with scanf
	and a bit of manipulation
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	/* Declare some char arrays */
	char	arcInputString1[50];		/* Should be more than enough */
	char	arcInputString2[50];
	char	arcInputString3[50];
	char	arcCompositeString[150];

	printf("\n\nWeek 12 Lecture 2\nExample 6\nString handling\n\n");

	printf("Please enter your first name : ");
	scanf("%s",arcInputString1);

	printf("Please enter your second name : ");	
	scanf("%s",arcInputString2);

	printf("Please enter your last name : ");	
	scanf("%s",arcInputString3);

	printf("\n");

	/* 	Step 1
		Now build the full name
	 	Copy first name into the composite string
	   	using strcpy() - string copy
		
		Note which way around strcpy expects the strings ...
		strcpy(destination, source);
	*/
	strcpy(arcCompositeString, arcInputString1);
	printf("After Step 2, the composite string is now %s\n\n", arcCompositeString);

	/* 	Step 2
		To add the second name, we can not use strcpy again as it
		will simply overwrite the first copy.
		Use strcat() - string concatenate (join together)
	*/
	strcat(arcCompositeString, arcInputString2);
	printf("After Step 2, the composite string is now %s\n\n", arcCompositeString);

	/* 	Step 3
		Now repeat using strcat() but with the third input string
	*/
	strcat(arcCompositeString, arcInputString3);
	printf("After Step 3, the composite string is now %s\n\n", arcCompositeString);

	return 0;
}
