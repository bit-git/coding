/*	Week 12 Lecture 2
	Example 1
	
	Direct string assignment
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 	 int nCount;
 	 
 	 printf("\nWeek 12 Lecture 2\nExample 1\n\nDirect string assignment\n\n");
 	 
 	 char arcGreetings[10] = "Hello Mum";	 
 	 
 	 printf("\n%s\n", arcGreetings); /* %s for strings */
 	 
 	 /* Now, change a few things */
 	 arcGreetings[6] = 'D';		/* Note use of single quotes */
 	 arcGreetings[7] = 'a';
 	 arcGreetings[8] = 'd';
 	 
 	 printf("\n%s\n", arcGreetings);
 	 
 	 /* Now backwards */
 	 printf("\n\n");
 	 for(nCount = 9; nCount >= 0; nCount--)
			printf("%c", arcGreetings[nCount]);
    printf("\n\n");
    
 	 system("PAUSE");
 	 return 0;
}
