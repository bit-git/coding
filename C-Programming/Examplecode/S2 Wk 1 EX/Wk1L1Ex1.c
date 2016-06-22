/*	Semester 2 Week 1
	Example 1			Wk1L1Ex1.c

	Nesting Structures
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Wk1L1Ex1.h"	// Note use of quotes

int main(void)
{
	struct strStudent	Student1, Student2;
	struct strEmployee Emp1, Emp2;

	system("cls"); // This is for UNIX - change "clear" to "cls" for Windows

	printf("\nSemester 2 Week 1\nExample 1\n\nNesting Structures\n");

	/* 	Add some details to the students
		Culd use scanf etc, but will use string literals for speed
	*/
	Student1.strDetails.cSex = 'M';		// Note how using the dot notation
	Student2.strDetails.cSex = 'F';		// to access struct with the struct

	strcpy(Student1.strDetails.arcFirst, "Charles");
	strcpy(Student1.strDetails.arcMiddle, "Henry");
	strcpy(Student1.strDetails.arcLast, "Winterbottom");
	Student1.strDetails.strDOB.nDay = 8;
	Student1.strDetails.strDOB.nMnth = 5;
	Student1.strDetails.strDOB.nYear = 1996;
	strcpy(Student1.arcCourseTitle, "Computer Science");
	strcpy(Student1.arcRegNumber, "123456789");
	Student1.strStartDate.nDay = 21;
	Student1.strStartDate.nMnth = 9;
	Student1.strStartDate.nYear = 2013;

	printf("\nStudent1's name is %s %s %s\n",Student1.strDetails.arcFirst,
											 Student1.strDetails.arcMiddle,
											 Student1.strDetails.arcLast);

	/* 	Output the DOB
		Note that the %d has been changed to %02d or %04d
		The '0' (zero) is a flag to indicate that any 
		padding should be carried out using zeros
		The 2 or 4 indiates the minimum number of characters to use
		when displaying the value
	*/
	printf("Student1's Date of Birth is %02d:%02d:%04d\n",
											Student1.strDetails.strDOB.nDay,
											Student1.strDetails.strDOB.nMnth,
											Student1.strDetails.strDOB.nYear);







	return 0;
}
