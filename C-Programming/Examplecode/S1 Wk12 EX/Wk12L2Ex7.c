/*	Week 12 Lecture 2
	Example 7

	Introduction to Structures
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	/* Define the structure */
	struct employee
	{
		char	arcGName[50];
		char	arcFName[50];
		char	cGender;
		int		nAge;
		char	arcJobTitle[50];
		double	dSalary;
	};

	/* Now instantiate */
	struct employee Emp1;

	printf("Week 12 Lecture 2\nExample 7\nIntroduction to Structures\n\n");

	/* 	Now add some data - use constants for now
		Note the use of a dot to access the internal data 
		variables - first a simple one */
	Emp1.nAge = 33;

	/* Now output */
	printf("\nThe employee's age is %d\n\n", Emp1.nAge);

	/* Now add some strings - need to use strcpy() */
	strcpy(Emp1.arcGName, "David D");
	strcpy(Emp1.arcFName, "Hodgkiss");
	strcpy(Emp1.arcJobTitle, "Senior Lecturer & Award Leader");
	
	/* 	That is the strings, now for the char.
		No need to use strcpy() as it is not a string */
	Emp1.cGender = 'M';		/* Note use of single quotes */

	/* ... and finally - Salary */
	Emp1.dSalary = 15851.89;

	/* Now output the lot */
	printf("The employee's name is %s %s\nJob Title %s\nGender %c  Age %d\nSalary %lf\n\n",
											Emp1.arcGName, 
											Emp1.arcFName,
											Emp1.arcJobTitle,
											Emp1.cGender,
											Emp1.nAge,
											Emp1.dSalary);



	return 0;
}
