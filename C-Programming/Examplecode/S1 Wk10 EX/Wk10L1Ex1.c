/*	HCS Week 6 Lecture 1
	Example 1

	While Loop Example
	See lecture notes for specification
*/

#include <stdio.h>

int main(void)
{
	int nInputVal, nMinlow, nMaxlow, nMinmid, nMaxmid, nMinhigh, nMaxhigh, nCountlow, nCountmid, nCounthigh;

	nCountlow = 0;
	nCountmid = 0;
	nCounthigh = 0;
	
	nMinlow = 0;
	nMaxlow = 0;
	nMinmid = 0;
	nMaxmid = 0;
	nMinhigh = 0;
	nMaxhigh = 0;
	nInputVal = 0;

	while(nInputVal != -9999)
	{
		printf("Input an integer, -9999 to end : ");
		scanf("%d", &nInputVal);

		if(nInputVal <= -10 && nInputVal >= -120)
		{
			nCountlow++;
			if(nInputVal > nMaxlow) nMaxlow = nInputVal;
			if(nInputVal < nMinlow) nMinlow = nInputVal;
		}
		
		if(nInputVal >= 150 && nInputVal <= 300)
		{
			nCountmid++;
			if(nInputVal > nMaxmid) nMaxmid = nInputVal;
			if(nInputVal < nMinmid) nMinmid = nInputVal;
		}
		if(nInputVal >= 301 && nInputVal <= 500)
		{
			nCounthigh++;
			if(nInputVal > nMaxhigh) nMaxhigh = nInputVal;
			if(nInputVal < nMinhigh) nMinhigh = nInputVal;
		}

	} /* End of while loop */

	if(nCountlow > 0)
	{
		printf("Number of values in range -10 to -120 is %d\n",nCountlow);
		printf("The maximum value was %d\n", nMaxlow);
		printf("The minium value was %d\n", nMinlow);
	}
	if(nCountmid > 0)
	{
		printf("Number of values greater than 150 and less 300 is %d\n",nCountmid);
		printf("The maximum value was %d\n", nMaxmid);
		printf("The minium value was %d\n", nMinmid);
		
	}
	if(nCounthigh > 0)
	{
		printf("Number of values greater than 301 and less 500 is %d\n",nCounthigh);
		printf("The maximum value was %d\n", nMaxhigh);
		printf("The minium value was %d\n", nMinhigh);
	}
	else
		printf("No values over 150\n\n");

	return 0;
}
