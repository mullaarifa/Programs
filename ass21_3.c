//Program to Display product of digits of all elements from singly Linear Linked list.
/*
|11|->|28|->|17|->|414|->|6|->|89|->NULL
	11	414	6
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

void DisplayProduct(PNODE head)
{
	int iNo=0,iDigit=0,iTemp=0;
	int iMult=1;
	
	iNo = head->data;
	while(head!=NULL)
	{
		iMult=1;
		iNo=head->data;

		while(iNo>0)
		{
			iDigit=iNo%10;
			
			if(iDigit==0)
			{
				iDigit=1;
			}
				iMult=iMult*iDigit;
				iNo=iNo/10;
		}
		printf("%d\t",iMult);
		head = head->next;
	}	
}
int main()
{
	
	PNODE first=NULL;
	
	InsertFirst(&first,11);
	InsertFirst(&first,20);
	InsertFirst(&first,32);
	InsertFirst(&first,41);
	
	
	Display(first);
	
   	DisplayProduct(first);
	
	return 0;
}
