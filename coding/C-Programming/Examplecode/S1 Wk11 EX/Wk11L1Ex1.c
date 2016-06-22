/*	Week 11 Lecture 1
	Example 1

	Use of sizeof()
*/


#include <stdio.h>


int main(void)
{

	printf("\n\t\tType Sizes\n");
	printf("char\tshort\tint\tlong\tfloat\tdouble\n");
	printf("%3ld\t%3ld\t%3ld\t%3ld\t%3ld\t%3ld\n\n", sizeof(char), 
													 sizeof(short), 
													 sizeof(int), 
													 sizeof(long), 
													 sizeof(float), 
													 sizeof(double));


	return 0;
}
