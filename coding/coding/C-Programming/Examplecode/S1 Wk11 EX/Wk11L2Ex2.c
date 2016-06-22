/*	Week 11 Lecture 2
	Example 2

	Passing whole array to a function
*/

#include <stdio.h>
#include <stdlib.h>

/*	Function Prototype
	Note - size of array not specified */
int fnFindMax(int arnVals[]);

int main(void)
{
	/* Note that the array is sized using a constant
	   it is not possible to use a variable as 
	   arrays in C are fixed size
	   Also note the method of populating the array */
	int arnNums[5] = {2, 18, 1, 27, 16};
	int nMaxVal;

	/* Call function - only need to give array name
	   This is actually a pointer to the start of the array
	   The array is not actually copied */
	nMaxVal = fnFindMax(arnNums);

	printf("The maximum value is %d\n\n", nMaxVal);
	
	system("PAUSE");
	return 0;
}

int fnFindMax(int arnVals[])
{
	int nCount;
	int nMax = 0;

	/* Note that here the for loop and if statement
	   do not have any braces.
	   This is acceptable as long as there is only
	   one line of code that follows.
	   Any more lines would need the braces */
	for(nCount = 0; nCount < 5; nCount++)
		if(nMax < arnVals[nCount])
			nMax = arnVals[nCount];

	return nMax;
}

