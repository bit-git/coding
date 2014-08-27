/*	Week 1 Semester 2 Lecture 2
	Example 4

	Inputing lines of delimited data
*/

#include <stdio.h>
#include <stdlib.h>

#include "Wk1L2Ex4.h"

int main(void)
{
	FILE *ptrF1;
	struct strPerson arPeople[7];
	int nCount;

	ptrF1 = fopen(FILE_NAME, "r");
	if(!ptrF1)
	{
		fprintf(stdout, "Unable to open %s\n\tExiting program\n\n", FILE_NAME);
		exit(EXIT_FAILURE);
	}

	for(nCount = 0; nCount < 7; nCount++)
	{
		fscanf(ptrF1, "%s%s%s%s%s", arPeople[nCount].arcGName,
									arPeople[nCount].arcFName,
									arPeople[nCount].arcJobTitle,
									arPeople[nCount].arcUserID,
									arPeople[nCount].arcPassWord);

		fprintf(stdout, "%s %s %s %s %s\n", arPeople[nCount].arcGName,
											arPeople[nCount].arcFName,
											arPeople[nCount].arcJobTitle,
											arPeople[nCount].arcUserID,
											arPeople[nCount].arcPassWord);
	}


	fclose(ptrF1);
	return 0;
}
