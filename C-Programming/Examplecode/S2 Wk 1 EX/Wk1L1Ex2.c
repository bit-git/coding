/*	Week 1 Semester 2 Lecture 1
	Example 2		Wk1L1Ex2.c

	Use of .h file to hold definitions
	see also Wk1L1Ex2.h
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Wk1L1Ex2.h"	/* 	Note use of double inverted commas.
							This indicates to look in current 
							directory rather than the libary
							directories
						*/

int main(void)
{
	/* Declare an employee entity */
	struct	strEmployee Emp1;

	printf("Week 1 Semester 1 Lecture 1\nExample 2\n\nUse of .h file\n\n");

	/* Now add some data using scanf() */
	printf("Please enter the Given Name : ");
	scanf("%s", Emp1.arcGName);

	printf("Please enter the Family Name : ");
	scanf("%s", Emp1.arcFName);

	printf("Please enter the Gender : ");
	scanf("%s", &Emp1.cGender);

	printf("Please enter the Age : ");
	scanf("%d", &Emp1.nAge);

	printf("Please enter the Job Title : ");
	scanf("%s", Emp1.arcJobTitle);

	printf("Please enter the Salary : ");
	scanf("%lf", &Emp1.dSalary);

	/*	Note that & has been used for the structure variables
		cGender, nAge, dSalary as they are not strings
	*/
	
	/* 	Now print out the entered details */
	printf("The employee's name is %s %s\nJob Title %s\nGender %c  Age %d\nSalary %lf\n\n",
												Emp1.arcGName,
												Emp1.arcFName,
												Emp1.arcJobTitle,
												Emp1.cGender,
												Emp1.nAge,
												Emp1.dSalary);
	return 0;
}
