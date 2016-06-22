/* 	Week 12 Lecture 1
	Example 4

	Array declaration - non constant.

	This code shows that it is possible to 
	declare an array in C using a variable.

	This is possible as the facility has been
	added as an extension within the GNU
	compiler and is therefore not 
	strict C
*/

#include <stdio.h>

int main(void)
{
	int nSize, nCount;

	printf("Enter array size : ");
	scanf("%d", &nSize);

	int Array[nSize];

	for(nCount = 0; nCount < nSize; nCount++)
	{
		Array[nCount] = nCount;
	}
	
	for(nCount = 0; nCount < nSize; nCount++)
	{
		printf("%3d", Array[nCount]);
	}
		
	return 0;
}
