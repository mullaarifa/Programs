/*Write a Program which return smallest element from singly linear linked list
  
  Function Prototype:
  
  int SerachFirstOcc(PPNODE Head);
  
  Input Linked List: |110|->|230|->|20|->|240|->|640|->NULL
    
  Output: 20
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

int Minimum(PNODE head)
{
	PNODE temp = NULL;
	
	temp = head -> next;
		
	while(temp != NULL)
	{
		if(head -> data > temp -> data)
		{
			head = temp;
		}
		temp = temp -> next;
	}
	return head -> data;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first, 640);
	InsertFirst(&first, 240);
	InsertFirst(&first, 20);
	InsertFirst(&first, 230);
	InsertFirst(&first, 110);
	
	Display(first);
		
	iRet = Minimum(first);
	
	printf("Maximum Element in the link list is: %d\n",iRet);
	
	return 0;
}
