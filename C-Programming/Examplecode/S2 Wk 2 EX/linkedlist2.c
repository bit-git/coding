#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"		/* conatins structure definition */

/* Function Prototypes */
struct listnode *fnAddItem(struct listnode *ptrH, int nNumber);
void fnPrintList(struct listnode *ptrH);
int fnMenu(void);
struct listnode *fnRemoveEndItem(struct listnode *ptrH, int *ptrNum);
struct listnode *fnRemoveStartItem(struct listnode *ptrH, int *ptrNum);

int main(int argc, char *argv[])
{
 	 struct listnode *ptrHead = NULL;
	 struct listnode *ptrTemp = NULL;
 	 int nChoice = 0;
	 int nRun = 1;
	 int nItem = 0;

	 while(nRun)
	 {
	 	 nChoice = fnMenu();
		 
		 switch(nChoice)
		 {
		     case 1:	/* Add an item */
							printf("Please enter an integer : ");
							scanf("%d", &nItem);
							ptrHead = fnAddItem(ptrHead,nItem);
			  		 		break;

			  case 2:	/* Print the list */
							fnPrintList(ptrHead);
			  		 		break;

			  case 3:	/* Remove an end item */
			  				ptrHead = fnRemoveEndItem(ptrHead, &nItem);
							if(nItem == -9999)
								printf("Nothing to remove - empty list\n\n");
							else
								printf("The removed value is %d\n\n", nItem);
							break;

			  case 4:	/* Remove a start item */
			  				ptrHead = fnRemoveStartItem(ptrHead, &nItem);
							if(nItem == -9999)
								printf("Nothing to remove - empty list\n\n");
							else
								printf("The removed value is %d\n\n", nItem);
							break;

			  case 5:	/* Exit program */
							nRun = 0;	/* set to zero to stop the while loop */
			  		 		break;
		}
	}
 	
  	return 0;
}

struct listnode *fnAddItem(struct listnode *ptrH, int nNumber)
{
	struct listnode *ptrTemp = NULL;

	if(ptrH == NULL)
	{
		/* Special case - list empty */
		ptrH = (struct listnode *)malloc(sizeof(struct listnode));
		if(ptrH == NULL)
		{
			printf("Adding to empty list - malloc has failed\n");
			exit(1);
		}
		/* malloc has worked - set values */
		(*ptrH).nVal = nNumber;
		ptrH->ptrNext = NULL;		/* This is important as it signals
												the last node within the list */
	}
	else
	{
		/* There are items already in the list
			need to locate the end - use a while loop
			to step through looking for ptrNext to
			equal NULL */
		
		ptrTemp = ptrH;	/* Use a temp pointer */
		while(ptrTemp->ptrNext != NULL)
		{
			/* As ptrNext has a value there is a node
				hanging off it */
			ptrTemp = ptrTemp->ptrNext;
		}
		/* ptrTemp is now pointing at the last node
			within the list
			Now, create a new node that "hangs off"
			ptrNext within this last node  */

			ptrTemp->ptrNext = (struct listnode *)malloc(sizeof(struct listnode));
			if(ptrTemp->ptrNext == NULL)
			{
				printf("Adding to end of list - malloc has failed\n");
				exit(1);
			}
			ptrTemp->ptrNext->nVal = nNumber;
			ptrTemp->ptrNext->ptrNext = NULL;
	}

	return ptrH;	/* This is really only needed when adding the first item
							to the list - but have to do it in all cases to avoid
							error messages */
}

int fnMenu(void)
{
 	 int nChoice;
 	 
 	 printf("Choices menu\n\n");
	 printf("1.\tAdd an item\n");
	 printf("2.\tPrint list\n");
	 printf("3.\tRemove an end item\n");
	 printf("4.\tRemove a start item\n");
	 printf("5.\tQuit\n\n");
	 printf("Please enter a choice :");
	 scanf("%d", &nChoice);

	 return nChoice;
}

void fnPrintList(struct listnode *ptrH)
{
	if(!ptrH)
	{
		printf("\n\n\tEmpty list\n");
	}
	else
	{
		while(ptrH)
		{
			printf("%d\n", ptrH->nVal);
			ptrH = ptrH->ptrNext;
		}
		printf("\nEnd of list\n\n");
	}

}

struct listnode *fnRemoveEndItem(struct listnode *ptrH, int *ptrNum)
{
	/*	There are two special cases ...
		1. When the list is empty
		2. When there is only one node within the list
	*/
	struct listnode *ptrTemp = NULL;

	if(!ptrH)
	{
		/* The list is empty */
		*ptrNum = -9999;		/* A value to signal empty list */
	}
	else if(!ptrH->ptrNext)
	{
		/*	There is only one node in the list
			as ptrNext within the first node
			is NULL
		*/
		*ptrNum = ptrH->nVal; 
		free(ptrH);				/* 	This releases the memory allocated
									by malloc() back to the heap */
		
		ptrH = NULL;			/*	As this was the last item to remove
									need to return NULL so that ptrHead
									is set to NULL */
	}
	else
	{
		/*	There are more than one nodes in the list,
			need to step through to find the last but
			one node
		*/
		ptrTemp = ptrH;
		while(ptrTemp->ptrNext->ptrNext)
		{
			ptrTemp = ptrTemp->ptrNext;
		}

		/*	ptrTemp is now pointing to the last but
			one node so can delete the last one
		*/
		*ptrNum = ptrTemp->ptrNext->nVal;
		free(ptrTemp->ptrNext);
		ptrTemp->ptrNext = NULL;	/* Set to NULL as this is 
									   now the last node
									*/
	}

	return ptrH;
}


struct listnode *fnRemoveStartItem(struct listnode *ptrH, int *ptrNum)
{
	struct listnode *ptrTemp = NULL;

	if(!ptrH)
	{
		/*	Empty list */
		*ptrNum = -9999;
		return ptrH;
	}
	else
	{
		ptrTemp = ptrH->ptrNext;
		*ptrNum = ptrH->nVal;
		free(ptrH);
		return ptrTemp;
	}
}
