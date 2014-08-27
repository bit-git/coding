/* Week 11 Lecture 2
   Example 1
   
   Passing array elements to functions
*/

#include <stdio.h>
#include <stdlib.h>

int fnFindMin(int nVal1, int nVal2);

int main(int argc, char *argv[])
{
    /* Note the prefix for Grades: 'ar' to indicate an array
       and 'n' to indicate integers. */
    int arnGrades[5] = {32, 15, 86, 92, 45}; /* Note how array populated */     
    int nMinGrade;
    
    nMinGrade = fnFindMin(arnGrades[3], arnGrades[0]);
    
    printf("The minimum grade is %d\n\n", nMinGrade);
    
    system("PAUSE");	
    return 0;
}

int fnFindMin(int nVal1, int nVal2)
{
    if(nVal1 < nVal2)
    {
        return nVal1;
    }
    else
    {
        return nVal2;
    }    
}
