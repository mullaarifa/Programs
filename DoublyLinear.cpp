#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *prev;
	struct node *next;
};

template<class T>
class DoublyLL
{
	public:
		struct node<T> *Head;
		int Count;
		
	DoublyLL();
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
DoublyLL<T>::DoublyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	if(newn == NULL)
	{
		return;
	}
	
	newn -> data = no;
	newn -> prev = NULL;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		Head -> prev = newn;
		newn -> next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL, *temp = Head;
	newn = new node<T>;
	
	if(newn == NULL)
	{
		return;
	}
	
	newn -> data = no;
	newn -> prev = NULL;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
		newn -> prev = temp;
	}
	Count++;
}

template<class T>
void DoublyLL<T>::InsertAtPos(T no, int iPos)
{
	if((Head == NULL) || (iPos > Count + 1) || (iPos <= 0))
	{
		return;
	}
	else if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == (Count + 1))
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL, *temp = Head;
		newn = new node<T>;
		
		if(newn == NULL)
		{
			return;
		}
		newn -> data = no;
		newn -> prev = NULL;
		newn -> next = NULL;
		
		for(int i = 1; i <= (iPos -2); i++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next -> prev = newn;
		newn -> prev = temp;
		temp -> next = newn;
	}
	Count++;
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
	struct node<T> *temp = Head;
	
	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = Head -> next;
		Head -> prev = NULL;
		delete temp;
	}
	Count--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
	struct node<T> *temp = Head;
	
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
		while(temp -> next != NULL)
		{
			temp = temp->next;
		}
		temp -> prev -> next = NULL;
		delete temp;
	}
	Count--;
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
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
		struct node<T> *temp = Head;
		
		for(int i = 1; i <= (iPos - 2); i++)
		{
			temp = temp -> next;
		}
		temp -> next = temp -> next -> next;
		delete temp -> next -> prev;
		temp -> next -> prev = temp;
	}
	Count--;
}

template<class T>
void DoublyLL<T>::Display()
{
	cout<<"Elements From Link List are: "<<endl;
	struct node<T> *temp = Head;
	
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}


template<class T>
int DoublyLL<T>::CountNode()
{
	return Count;
}
int main()
{
	DoublyLL <int>obj1;
	DoublyLL <float>obj2;
	
	obj1.InsertFirst(101);
	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.Display();
	cout<<"Elements From Link Lisk after Insert First Are: "<<obj1.CountNode()<<endl;
	
	obj1.InsertLast(121);
	obj1.InsertLast(151);
	obj1.Display();
	cout<<"Elements From Link Lisk after Insert Last Are: "<<obj1.CountNode()<<endl;
	
	obj1.InsertAtPos(75,3);
	obj1.Display();
	cout<<"Elements From Link Lisk after Insert At Position Are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Elements From Link Lisk after Delete First Are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteLast();
	obj1.Display();
	cout<<"Elements From Link Lisk after Delete Last Are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteAtPos(3);
	obj1.Display();
	cout<<"Elements From Link Lisk after Delete At position Are: "<<obj1.CountNode()<<endl;
	
	cout<<"---------------------------------------------------------------------------------"<<endl;
	
	obj2.InsertFirst(101.11);
	obj2.InsertFirst(51.11);
	obj2.InsertFirst(21.11);
	obj2.InsertFirst(11.11);
	obj2.Display();
	cout<<"Elements From Link Lisk after Insert First Are: "<<obj2.CountNode()<<endl;
	
	obj2.InsertLast(121.11);
	obj2.InsertLast(151.11);
	obj2.Display();
	cout<<"Elements From Link Lisk after Insert Last Are: "<<obj2.CountNode()<<endl;
	
	obj2.InsertAtPos(75.11,3);
	obj2.Display();
	cout<<"Elements From Link Lisk after Insert At Position Are: "<<obj2.CountNode()<<endl;
	
	obj2.DeleteFirst();
	obj2.Display();
	cout<<"Elements From Link Lisk after Delete First Are: "<<obj2.CountNode()<<endl;
	
	obj2.DeleteLast();
	obj2.Display();
	cout<<"Elements From Link Lisk after Delete Last Are: "<<obj2.CountNode()<<endl;
	
	obj2.DeleteAtPos(3);
	obj2.Display();
	cout<<"Elements From Link Lisk after Delete At position Are: "<<obj2.CountNode()<<endl;
	return 0;
}
