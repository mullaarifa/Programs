//Program to Display Smallest Digit of all elements from Singly Linear Linked List
/*
|11|->|250|->|532|->|415|->NULL
1	 0	 2	 1
*/
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef int BOOL;


struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}

void DisplaySmall(PNODE head)
{
	int iNo=0,iDigit=0,iDigiSmall=0;
	
	iNo = head->data;
	while(head!=NULL)
	{
		iNo = head->data;
		iDigiSmall = (iNo%10);
		while(iNo>0)
		{			
			iDigit = iNo%10;

			if(iDigiSmall>iDigit)
			{
				iDigiSmall = iDigit;
			}
			iNo=iNo/10;			
		}
		printf("%d\t ",iDigiSmall);
		head = head->next;
	}	
}
int main()
{
	
	PNODE first=NULL;
	
	InsertFirst(&first,415);
	InsertFirst(&first,532);
	InsertFirst(&first,250);
	InsertFirst(&first,11);
	
	
	Display(first);
	
   	DisplaySmall(first);
	
	return 0;
}
