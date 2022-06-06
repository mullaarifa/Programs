/* Write a program which display addition of all elements from singly linear link list.
  
Function Prototype:

SumDigit(PNODE head);

Input Linked List:|110|->|220|->|320|->|240|->NULL

OUTPUT:

240

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

int Count(PNODE head)
{
	int iCnt = 0;
	
	while(head != NULL)
	{
		iCnt++;		
		head = head->next;
	}
	return iCnt;
}


void SecMaximum(PNODE head)
{
	PNODE temp = NULL;
	PNODE temp1 = NULL;
	int Size = 0;
	int iCnt = 0;
	
	//Finding the number of nodes
	Size = Count(head);
	
	//Declare array for finding second maximum number
	int Arr[Size - 1];
	 
	
	temp = head -> next;
	temp1 = head;
	
	//Finding a First largest Number
	while(temp != NULL)
	{	
		if(head -> data < temp -> data)
		{
			head = temp;
		}
		temp = temp -> next;
	}
	
	//Initializing the array with the data of nodes of linked list except the largest data
	while(temp1 != NULL)
	{
		if(temp1 -> data != head -> data)
		{	
			Arr[iCnt++] = temp1 -> data;
		}
		
		temp1 = temp1 -> next;
	}
	
	//Finding the largest number in the array, which will be the second largest of linked list
	
	for(iCnt = 1; iCnt < Size-1; iCnt++)
	{
		if(Arr[0] < Arr[iCnt])
		{
			Arr[0] = Arr[iCnt];
		} 
	}
	printf("Second Maximum value is %d\n",Arr[0]);
}

int main()
{
	PNODE first = NULL;
	
	InsertFirst(&first, 240);
	InsertFirst(&first, 320);
	InsertFirst(&first, 220);
	InsertFirst(&first, 110);
	
	Display(first);

	SecMaximum(first);
	
	return 0;
}

