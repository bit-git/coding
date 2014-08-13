/*	Week 1 Semester 2 Lecture 1
	Example 2		Wk1L1Ex2.h

	Use of .h file to hold definitions
	see also Wk1L1Ex2.c
*/

#define STRING_LEN 50	/* 	Use this method to define string length
							rather than individual entries - this 
							gives a single point to make alterations
						*/

struct strEmployee
{
	char	arcGName[STRING_LEN];	/* Given Name */
	char	arcFName[STRING_LEN];	/* Family Name */
	char	cGender;
	int		nAge;
	char	arcJobTitle[STRING_LEN];
	double	dSalary;
};									/* Don't forget this semi-colon */


/*	It is perfectly acceptable to include more than one structure
	definition and other definitions within this file.

	If you are nesting structures ...
	Make sure that you define the structures in the right order, so if
	StructA contains StructB within it, you must define StructB ahead
	of StructA. Try defining in the wrong order to see what error
	messages are generated.

	However, you should not declare any as that would render them
	as global entity variables - BAD PROGRAMMING PRACTICE!!!!
*/
