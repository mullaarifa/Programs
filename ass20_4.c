/* Write a program which display addition of all elements from singly linear link list.
  
Function Prototype:

SumDigit(PNODE head);

Input Linked List:|110|->|220|->|20|->|240|->|640|->NULL

OUTPUT:

2	4	2	6	10

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


void SumDigit(PNODE head)
{
	int iDigit = 0, iSum = 0;
	
	while(head != NULL)
	{
		iSum = 0;
		while(head -> data > 0)
		{
			iDigit = head->data % 10;
			iSum = iSum + iDigit;
			head -> data = (head -> data)/10;
		}
		printf("%d\t",iSum);
	
		head = head -> next;
	}
	printf("\n");
	
}

int main()
{
	PNODE first = NULL;
	
	InsertFirst(&first, 640);
	InsertFirst(&first, 240);
	InsertFirst(&first, 20);
	InsertFirst(&first, 220);
	InsertFirst(&first, 110);
	
	Display(first);

	SumDigit(first);
	
	return 0;
}

