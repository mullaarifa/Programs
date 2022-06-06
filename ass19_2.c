/*Write a Program which serach Last occurance of perticular element from singly linear linked list
  function should return position at which element is found
  
  Function Prototype:
  
  int SerachFirstOcc(PPNODE Head, int no);
  
  Input Linked List: |10|->|20|->|30|->|40|->|50|->|30|->|70|->NULL
  
  Input Element: 30
  
  Output: 6
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

int SearchLastOcc(PNODE head, int iNo)
{
	int iCnt = 0;
	int iLastOcc = 0;
	
	while(head != NULL)
	{
		iCnt++;
		
		if(head -> data == iNo)
		{
			iLastOcc = iCnt;			
		}
		head = head -> next;
	}
	return iLastOcc;
}

int main()
{
	PNODE first = NULL;
	int iRet = 0, iValue = 0;
	
	InsertFirst(&first, 70);
	InsertFirst(&first, 30);
	InsertFirst(&first, 50);
	InsertFirst(&first, 40);
	InsertFirst(&first, 30);
	InsertFirst(&first, 20);
	InsertFirst(&first, 10);
	
	Display(first);

	printf("Enter the element that you want to search: ");
	scanf("%d",&iValue);
		
	iRet = SearchLastOcc(first, iValue);
	
	if(iRet == 0)
	{
		printf("Element is not present in link list");
	}
	else
	{
		printf("Element is present at position %d\n",iRet);
	}
	
	return 0;
}
