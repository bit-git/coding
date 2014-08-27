/*	Week 12 Lecture 2
	Example 3

	String with no terminator
*/

#include <stdio.h>


int main(void)
{
	/* Declare an aray for the string */
	char arcString[15];
	
	printf("\n\nWeek 12 Lecture 2\nExample 3\n\nString with no terminator\n");


	/* Add individual characters to the array
	   not very efficient though
	*/
	arcString[0] = 'H';
	arcString[1] = 'C';
	arcString[2] = 'S';
	arcString[3] = ' ';
	arcString[4] = 'i';
	arcString[5] = 's';	
	arcString[6] = ' ';
	arcString[7] = 'G';
	arcString[8] = 'r';
	arcString[9] = 'e';
	arcString[10] = 'a';
	arcString[11] = 't';

	/* Note: Note all array elements filled
			 String terminator missed
	*/

	printf("\n%s\n\n", arcString);

	/* What happend when the last line is printed will 
	   depend upon what is residing in memory.
	   The %s format specifer within printf will
	   output string character until it encounters 
	   a null terminator.
	*/

	/* Now add the terminator */
	arcString[12] = '\0';	/* Remember that \0 is seen as a
							   single character */


	printf("\n%s\n\n", arcString);



	return 0;
}
