//Program to display Palindrome numbers from Singly Linked List
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

void DisplayPalindrome(PNODE head)
{
	int iNo=0,iDigit=0,iTemp=0;
	int iReverse=0;

	iNo = head->data;
	while(head!=NULL)
	{
		iReverse=0;
		iNo=head->data;
		iTemp=iNo;
		while(iNo>0)
		{
			iDigit=iNo%10;
			iReverse=(iReverse*10)+iDigit;
			
			if(iReverse==iTemp)
			{
				printf("\t%d",iReverse);
			}
			iNo=iNo/10;
		}
		head = head->next;
	}	
}
int main()
{
	
	PNODE first=NULL;
	
	InsertFirst(&first,89);
	InsertFirst(&first,6);
	InsertFirst(&first,414);
	InsertFirst(&first,17);
	InsertFirst(&first,28);
	InsertFirst(&first,11);
	
	
	Display(first);
	
   	DisplayPalindrome(first);
	
	return 0;
}
