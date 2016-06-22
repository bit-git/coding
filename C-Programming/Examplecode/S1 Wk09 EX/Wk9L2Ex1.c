/* 	HCS Week 9 Lecture 2
	Example 1

	Calling functions
*/

/* Add some include files */
#include <stdio.h>

/* Function prototypes */
void function1(void);
void function2(void);
void function3(void);


int main(void)
{
	printf("Main started\n");
	function1();
	printf("Back from function1\n");

	function2();
	printf("Back from function2\n");

	return 0;
}

/* Function implementations - in alphabetical order */

void function1(void)
{
	printf("This is function1 called\n\n");
}

void function2(void)
{
	printf("This is function2 called\nWill now call function3\n\n");

	function3();
}

void function3(void)
{
	printf("This is function3 called \n\n");
}

