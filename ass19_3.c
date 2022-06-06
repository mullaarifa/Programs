/*Write a Program which return addition of all elements from singly linear linked list
  
  Function Prototype:
  
  int SerachFirstOcc(PPNODE Head);
  
  Input Linked List: |10|->|20|->|30|->|40|->NULL
  
  Output: 100
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

int Addition(PNODE head)
{
	int iSum = 0;
		
	while(head != NULL)
	{
		iSum = iSum + head ->data;
		head = head -> next;
	}
	return iSum;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0, iValue = 0;
	
	InsertFirst(&first, 40);
	InsertFirst(&first, 30);
	InsertFirst(&first, 20);
	InsertFirst(&first, 10);
	
	Display(first);
		
	iRet = Addition(first);
	
	if(iRet == 0)
	{
		printf("Elements are not present in link list for addition\n");
	}
	else
	{
		printf("Addition of all Elements in the link list is: %d\n",iRet);
	}
	
	return 0;
}
