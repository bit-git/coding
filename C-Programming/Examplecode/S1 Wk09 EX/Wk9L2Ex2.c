/* 	HCS Week 9 Lecture 2
	Example 2

	Calling functions with arguments and return values
*/

#include <stdio.h> /* if using a mac, # is "alt" + "3" */

/* Function Prototypes */
int AddTwoInts(int, int);	// Note that only showing data types
int SubTwoInts(int, int);
double DivTwoInts(int,int);

int main(void)
{
	/* Need to declare some variables
	   Always declare all variables first, i.e. before
	   giving any variables a value
	*/
	
	int nFirst;
	int nSecond;
	int nAdded;
	int nSubtracted;
	double fDivided;

	/* Now give some values */
	nFirst = 42;
	nSecond = 8;
	
	printf("\nIn main\n\n");
	/* Now call the functions */
	nAdded = AddTwoInts(nFirst, nSecond);
	
	printf("The two integers %d and %d, when added give %d\n\n", nFirst, nSecond, nAdded);

	nSubtracted = SubTwoInts(nFirst, nSecond);

	printf("The two integers %d and %d, when subtracted give %d\n\n", nFirst, nSecond, nSubtracted);

	fDivided = DivTwoInts(nFirst, nSecond);
	
	printf("The two integers %d and %d, when divided give %f\n\n",nFirst, nSecond, fDivided);

	return 0;
}

/* Function Implementations - in alphabetical order by function name not etun type */
int AddTwoInts(int nA, int nB)
{
	int nAns;
	nAns = nA + nB;

	return nAns;
}

double DivTwoInts(int nA, int nB)
{
	/* 	No need to use an intermediate variable
		Note that 'nA' has "(double)" preceeding it.
		This is casting the variable to a double to ensure
		that the division works correctly.
		In C, dividing and integer by an integer gives an
		integer result, i.e. no fractional part
	*/

	return (double)nA / nB;
}

int SubTwoInts(int nA, int nB)
{
	/* No need to have a intermediate variable */
	return nA - nB;
}
