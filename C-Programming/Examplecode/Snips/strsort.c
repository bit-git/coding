#include <stdio.h>
#include <string.h>  //for strcmp()
 
#define WORDNUM 7    //how many words there are
#define SIZE 30      //how large the largest word can be - 29 letters
                     //+1 for the end of string char marker  
 
void selectionSort(char words[WORDNUM][SIZE]);  
 
 
int main()
{
   int i;
   char words[WORDNUM][SIZE]={
      {"sierra"},
      {"hotel"},
      {"whiskey"},
      {"romeo"},
      {"bravo"},
      {"juliet"},
      {"alpha"}
   };
   printf("Original order\n");
   for(i=0;i<WORDNUM;i++) {
     printf("%s\n",words[i]);
   }
   printf("\nSorted order\n");
    
   selectionSort(words);
    
   for(i=0;i<WORDNUM;i++) {
     printf("%s\n",words[i]);
   }
    
   printf("\n");   
    
   return 0;
}
void selectionSort(char words[WORDNUM][SIZE])
{
   int i,j,n=WORDNUM,min;
   char temp[SIZE];
     
   for(i = 0; i < n-1 ; i++) {
      min = i;                 //set min to the firt index  
      for(j = i+1; j < n; j++) {
         if ((strcmp(words[j],words[min]))<0) {
            min = j;
         }
      }
  
      if( min != i ) {
         //printf("i:%d min:%d word[i]:%c  word[min]:%c\n",i,min,word[i],word[min]); getchar();
         strcpy(temp,words[i]);       //copy into temp, words[i]
         strcpy(words[i],words[min]); //copy into words[i], words[min] 
         strcpy(words[min],temp);     //copy into words[min],temp
 
      }
   }
}
