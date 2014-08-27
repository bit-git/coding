#define SIZE 31
void printstrtab(char strtab[][SIZE], int n);
#include <stdio.h>
//#define MAX 10

main()
{
	int n,x;
	int MAX;
	printf("Enter num of strings : ");
	scanf("%d",&x);
	//MAX = x;
	char names[x][SIZE];
	printf("Enter string \n");
	for (n=0;(n<=x) && gets(names[n]); n++);
	if (n==x)
	printf("tablw full");
	printstrtab(names, n);
	
}

void printstrtab(char strtab[][SIZE], int n)
{
	int k;
	printf("Names are: \n");
	for (k=0;k<n;k++)
	puts(strtab[k]);
}
