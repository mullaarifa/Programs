#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	public:
		struct node<T> *Head;
		int Count;
		
	SinglyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int CountNode();
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T no,int iPos)
{
	if((Head == NULL) || (iPos > Count + 1) || (iPos <= 0))
	{
		return;
	}
	else if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == Count + 1)
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL;
		int iCnt = 0;
		
		newn = new node<T>;
		
		newn -> data = no;
		newn -> next = NULL;
		
		struct node<T> *temp = Head;
		
		for(iCnt = 1; iCnt <= (iPos - 2); iCnt++)
		{
			temp = temp->next;
		}
		newn -> next = temp -> next;
		temp -> next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node<T> *temp = Head;
	
	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = temp -> next;
		free(temp);
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	if(Head == NULL)
	{
		return;
	}
	else if(Head -> next == NULL)
	{
		delete Head;
		Head = NULL;
	}
	else
	{
		struct node<T> *temp1 = Head, *temp2 = NULL;
		
		while(temp1 -> next -> next != NULL)
		{
			temp1 = temp1 -> next;
		}
		temp2 = temp1 -> next;
		temp1 -> next = NULL;
		free(temp2);
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
	if((Head == NULL) || (iPos > Count) || (iPos <= 0))
	{
		return;
	}
	else if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == Count)
	{
		DeleteLast();
	}
	else
	{
		int iCnt = 0;
		struct node<T> *temp1 = Head, *temp2 = NULL;
		
		for(iCnt = 1; iCnt <= (iPos - 2); iCnt++)
		{
			temp1 = temp1->next;
			++iCnt;
		}
		temp2 = temp1 -> next;
		temp1 -> next = temp2 -> next;
		delete temp2;
		
	}
	Count--;
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Element From Link List are: "<<endl;
	struct node<T> *temp = Head;
	while(temp != NULL)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}
int main()
{
	SinglyLL <int>obj1;
	SinglyLL <float>obj2;
	
	obj1.InsertFirst(101);
	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.Display();
	cout<<"Number Of Node Are: "<<obj1.CountNode()<<endl;
	
	obj1.InsertLast(111);
	obj1.Display();
	cout<<"Number Of Node After Insert Last: "<<obj1.CountNode()<<endl;
	
	obj1.InsertAtPos(75,2);
	obj1.Display();
	cout<<"Number Of Node After Insert At Pos: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Number Of Node After Delete First: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteLast();
	obj1.Display();
	cout<<"Number Of Node After Delete Last: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteAtPos(2);
	obj1.Display();
	cout<<"Number Of Node After Delete At pos: "<<obj1.CountNode()<<endl;
	
	obj2.InsertFirst(101.11);
	obj2.InsertFirst(51.11);
	obj2.InsertFirst(21.11);
	obj2.InsertFirst(11.11);
	obj2.Display();
	cout<<"Number Of Node Are: "<<obj2.CountNode()<<endl;
	
	obj2.InsertLast(111);
	obj2.Display();
	cout<<"Number Of Node After Insert Last: "<<obj2.CountNode()<<endl;
	
	obj2.InsertAtPos(75,2);
	obj2.Display();
	cout<<"Number Of Node After Insert At Posision: "<<obj1.CountNode()<<endl;
	
	obj2.DeleteFirst();
	obj2.Display();
	cout<<"Number Of Node After Delete First: "<<obj2.CountNode()<<endl;
	
	obj2.DeleteLast();
	obj2.Display();
	cout<<"Number Of Node After Delete Last: "<<obj2.CountNode()<<endl;
	
	obj2.DeleteAtPos(2);
	obj2.Display();
	cout<<"Number Of Node After Delete At pos: "<<obj1.CountNode()<<endl;
	
	return 0;
}
