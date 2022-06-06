/* Write a program which displays all elements which are prime from singly linear link list.
  
Function Prototype:

DisplayPerfect(PNODE head);

Input Linked List:|11|->|28|->|17|->|41|->|6|->|89|->NULL

Output:
11
17
41
89

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*head != NULL)
	{
		newn->next = *head;
		*head = newn;
	}
	*head = newn;
}

void Display(PNODE head)
{
	printf("Elements in Linked are:\n");
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("NULL\n");
}


int DisplayPrime(PNODE head)
{
	int iCnt = 0;
	
	while(head != NULL)
	{
	    for(iCnt = 2; iCnt <= (head -> data)/2; iCnt++)
	    {
		if(head -> data % iCnt == 0)   
		{
		    break;
		}
	    }
	    if(iCnt > (head -> data)/2)
	    {
	    	printf("%d\n", head -> data);
	    }
	    head = head -> next;
	}
}

int main()
{
	PNODE first = NULL;
	
	InsertFirst(&first, 89);
	InsertFirst(&first, 6);
	InsertFirst(&first, 41);
	InsertFirst(&first, 17);
	InsertFirst(&first, 28);
	InsertFirst(&first, 11);
	
	Display(first);

	DisplayPrime(first);
	
	return 0;
}

