/* Write a program which reverse all elements from singly linear link list.
  
Function Prototype:

SumDigit(PNODE head);

Input Linked List:|11|->|28|->|17|->|41|->|6|->|89|->NULL

OUTPUT:

11	82	71	14	6	98
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


void Reverse(PNODE head)
{
	int iDigit = 0, iRev = 0;
	
	while(head != NULL)
	{
		iRev = 0;
		while(head -> data > 0)
		{
			iDigit = head->data % 10;
			iRev = iRev*10+iDigit;
			head -> data = (head -> data)/10;
		}
		printf("%d\t",iRev);
	
		head = head -> next;
	}
	printf("\n");
	
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

	Reverse(first);
	
	return 0;
}

