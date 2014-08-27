/*	Week 1 Semester 2 Lecture 2
	Example 5

	Use of Command Line Arguments
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nCount;

	printf("Week 1 Semester 2 Lecture 2\nExample 5\n\nUse of Command Line Arguments\n\n");

	for(nCount = 0; nCount < argc; nCount++)
		printf("%s\n", argv[nCount]);



	return 0;
}
