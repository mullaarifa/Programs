#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;	
};

template<class T>
class SinglyCLL
{
	public:
		struct node<T> *Head;
		struct node<T> *Tail;
		int Count;
		
	SinglyCLL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T, int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int CountNode();
};

template<class T>
SinglyCLL<T>::SinglyCLL()
{
	Head = NULL;
	Tail = NULL;
	Count = 0;
}

template<class T>
void SinglyCLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	Tail -> next = Head;
	Count++;
}

template<class T>
void SinglyCLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail -> next = newn;
		Tail = newn;
	}
	Tail -> next = Head;
	Count++;
}

template<class T>
void SinglyCLL<T>::InsertAtPos(T no, int iPos)
{
	if((iPos > Count + 1)||(iPos <= 0))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == Count + 1)
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL, *temp = Head;
		
		newn = new node<T>;
		
		newn->data = no;
		newn->next = NULL;
		
		for(int i = 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		newn->next = temp -> next;
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyCLL<T>::DeleteFirst()
{	
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head -> next;
		delete Tail -> next;
		
		Tail -> next = Head;
	}
	Count--;
}

template<class T>
void SinglyCLL<T>::DeleteLast()
{
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		struct node<T> *temp = Head;
		
		while(temp -> next != Tail)
		{
			temp = temp -> next;
		}
		delete Tail;
		Tail = temp;
		
		Tail -> next = Head;
	}
	Count--;
}

template<class T>
void SinglyCLL<T>::DeleteAtPos(int iPos)
{
	if((iPos > Count)||(iPos <= 0))
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == Count)
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp1 = Head;
		
		for(int i = 1; i < iPos -1; i++)
		{
			temp1 = temp1 -> next;
		}
		
		struct node<T> *temp2 = temp1 -> next;
		temp1 -> next = temp2 -> next;
		delete temp2;
	}
	Count--;
}

template<class T>
void SinglyCLL<T>::Display()
{
	struct node<T> *temp = Head;
	
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	
	do
	{
		cout<<"|"<<temp -> data<<"|->";
		temp = temp -> next;
	}while(temp != Head);
	
	cout<<endl;
}

template<class T>
int SinglyCLL<T>::CountNode()
{
	return Count;
}
int main()
{
	SinglyCLL <int>obj1;
	
	obj1.InsertFirst(101);
	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);	
	obj1.Display();
	cout<<"Elements in Link list after Insert first are: "<<obj1.CountNode()<<endl;
	
	obj1.InsertLast(111);
	obj1.InsertLast(121);	
	obj1.Display();
	cout<<"Elements in Link list after Insert last are: "<<obj1.CountNode()<<endl;
	
	obj1.InsertAtPos(75,3);	
	obj1.Display();
	cout<<"Elements in Link list after Insert at position are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteFirst();	
	obj1.Display();
	cout<<"Elements in Link list after Delete First are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteLast();	
	obj1.Display();
	cout<<"Elements in Link list after Delete last are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteAtPos(3);	
	obj1.Display();
	cout<<"Elements in Link list after Delete last are: "<<obj1.CountNode()<<endl;
	
	return 0;
}
