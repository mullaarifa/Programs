/* Write a program which returns addition of all even elements from singly linear link list.
  
Function Prototype:

DisplayPerfect(PNODE head);

Input Linked List:|11|->|20|->|32|->|41|->NULL

Output:
52

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


int AdditionEven(PNODE head)
{
	int iSum = 0;
	
	while(head != NULL)
	{
		if(head -> data % 2 == 0)   
		{
	    		iSum = iSum + head -> data;
		}
	    	head = head -> next;
	}
	return iSum;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first, 41);
	InsertFirst(&first, 32);
	InsertFirst(&first, 20);
	InsertFirst(&first, 11);
	
	Display(first);

	iRet = AdditionEven(first);
	
	printf("Addition of even elements in link list is:%d\n",iRet);
	return 0;
}

