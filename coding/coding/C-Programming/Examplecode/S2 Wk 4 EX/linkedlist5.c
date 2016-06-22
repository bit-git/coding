#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"		/* conatins structure definition */

/* 	Function Prototypes 
	Note that variable names have been removed as they are 
	not actually required - they are optional
*/
int fnTotalList(struct listnode *);
struct listnode *fnAddItem(struct listnode *, int);
void fnPrintList(struct listnode *);
int fnMenu(void);
struct listnode *fnRemoveEndItem(struct listnode *, int *);
struct listnode *fnRemoveStartItem(struct listnode *, int *);
void fnSearchList(struct listnode *, int);
struct listnode *fnDeleteNode(struct listnode *, struct listnode *);
struct listnode *fnSearchList2(struct listnode *, int);

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
							printf("The list total is %d\n", fnTotalList(ptrHead));
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

			  case 5:	/* Search the list */
			  				printf("Please enter the search value : ");
							scanf("%d", &nItem);
			  				fnSearchList(ptrHead, nItem);
							break;

			  case 6:	/* Delete an item */
			  				printf("Please enter the search value : ");
							scanf("%d", &nItem);
							ptrTemp = fnDeleteNode(ptrHead, fnSearchList2(ptrHead, nItem));
							if(!ptrTemp)
								printf("Item not found, nothing deleted\n");
							else
							{
								ptrHead = ptrTemp;
								printf("Item deleted\nThe list now contains ...\n");
								fnPrintList(ptrHead);
							}
							break;

			  case 7:	/* Exit program */
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


struct listnode *fnDeleteNode(struct listnode *ptrH, struct listnode *ptrItem)
{
	/* 	This function requires two addresses
		The first is a pointer to the head of the list
		The second is the address of the node that is to be deleted
		The function returns the address of the first node within the
		list - in case it is the first node that is deleted.
	*/
	
	struct listnode *ptrTemp = ptrH;
	struct listnode *ptrTemp2 = NULL;

	if(!ptrH)
	{
		/* Empty list */
		return ptrH;
	}
	else if(ptrH == ptrItem)
	{
		/* 	Item is the first within the list
			use the existing function that was 
			written to delete the last item
		*/
		ptrH = ptrH->ptrNext;
		free(ptrTemp);
		return ptrH;
	}
	else
	{
		/*	The item was not found within the first
			node - need to search through the list
			for a match
		*/
		while(ptrTemp)
		{
			if(ptrTemp->ptrNext == ptrItem)	/* The node as been found */
			{
				ptrTemp2 = ptrTemp->ptrNext;
				ptrTemp->ptrNext = ptrTemp2->ptrNext;
				free(ptrTemp2);
				return ptrH;
			}
			else
				ptrTemp = ptrTemp->ptrNext;
		}
		return NULL;	/* To signal that item not found */
	}
}


int fnMenu(void)
{
 	 int nChoice;
 	 
 	 printf("Choices menu\n\n");
	 printf("1.\tAdd an item\n");
	 printf("2.\tPrint list\n");
	 printf("3.\tRemove an end item\n");
	 printf("4.\tRemove a start item\n");
	 printf("5.\tSearch for a value\n");
	 printf("6.\tDelete an item\n");
	 printf("7.\tQuit\n\n");
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


void fnSearchList(struct listnode *ptrH, int nSearchVal)
{
	struct listnode *ptrTemp = ptrH;
	int nCount = 0;

	if(!ptrH)
	{
		/* Empty List */
		printf("\n\nEmpty List \n\n");
	}
	else
	{
		while(ptrTemp->ptrNext)
		{
			if(ptrTemp->nVal == nSearchVal)
			{
				printf("The value %d has been located\n", ptrTemp->nVal);
				nCount++;
			}
			ptrTemp = ptrTemp->ptrNext;
		}

		if(!nCount)
			printf("\t\tValue not found within the list\n");
		else
			printf("\t\tA total of %d were found\n", nCount);
	}	
	printf("The list totals %d\n", fnTotalList(ptrH));
}

struct listnode *fnSearchList2(struct listnode *ptrH, int nItem)
{
	/*	This function searches through the list and returns
		the address of the first node where a match is found.
		If no match is found - NULL is returned
	*/

	struct listnode *ptrTemp = ptrH;

	if(!ptrTemp)
	{
		/* Empty list */
		return NULL;
	}
	else
	{
		while(ptrTemp)
		{
			/* Test for a match */
			if(ptrTemp->nVal == nItem)
				return ptrTemp;
			else
				ptrTemp = ptrTemp->ptrNext;
		}
	}
	/* If the execution gets here - no match */
	return NULL;
}


int fnTotalList(struct listnode *ptrH)
{
	struct listnode *ptrTemp = ptrH;
	int nTotal = 0;

	if(ptrTemp)
	{
		while(ptrTemp)
		{
			nTotal += ptrTemp->nVal;
			ptrTemp = ptrTemp->ptrNext;
		}
	}

	return nTotal;
}
