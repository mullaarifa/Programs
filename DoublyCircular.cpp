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
class DoublyCLL
{
	public:
		struct node<T> *Head;
		struct node<T> *Tail;
		int Count;
		
	DoublyCLL();
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
DoublyCLL<T>::DoublyCLL()
{
	Head = NULL;
	Tail = NULL;
	Count = 0;
}

template<class T>
void DoublyCLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> prev = NULL;
	newn -> next = NULL;
	
	if(Count == 0)	//if((Head == NULL) && (Tail == Null))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> next = Head;
		Head -> prev = newn;
		Head = newn;
	}
	
	Head -> prev = Tail;
	Tail -> next = Head;
	
	Count++;
}

template<class T>
void DoublyCLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	newn -> prev = NULL;
	
	if(Count == 0)	//if((Head == NULL) && (Tail == Null))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail -> next = newn;
		newn -> prev = Tail;
		Tail = newn;
	}
	
	Head -> prev = Tail;
	Tail -> next = Head;
	
	Count++;
}

template<class T>
void DoublyCLL<T>::InsertAtPos(T no, int iPos)
{
	if((iPos < 1) || (iPos > Count+1))
	{
		cout<<"Invalid Position\n";
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
		struct node<T> *newn = NULL;
		newn = new node<T>;
		
		newn -> data = no;
		newn -> next = NULL;
		newn -> prev = NULL;
		
		struct node<T> *temp = Head;
		
		for(int i = 1; i<iPos-1; i++)
		{
			temp = temp -> next;
		}
		newn -> prev = temp;
		newn -> next = temp -> next; 
		temp -> next -> prev = newn;
		temp -> next = newn;
		
		Count++;
	}
}

template<class T>
void DoublyCLL<T>::DeleteFirst()
{
	if(Count == 0)
	{
		return;
	}
	else if(Count == 1)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head -> next;
		delete Tail -> next;	//delete Head -> prev;
	}
	Head -> prev = Tail;
	Tail -> next = Head;
		
	Count--;
}

template<class T>
void DoublyCLL<T>::DeleteLast()
{
	if(Count == 0)
	{
		return;
	}
	else if(Count == 1)
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Tail = Tail -> prev;
		delete Tail -> next;	//delete Head -> prev;
	}
	
	Head -> prev = Tail;
	Tail -> next = Head;
	Count--;
}

template<class T>
void DoublyCLL<T>::DeleteAtPos(int iPos)
{
	if((iPos < 1) || (iPos > Count))
	{
		cout<<"Invalid Position\n";
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
		struct node<T> *temp = Head;

		for(int i = 1; i<iPos-1; i++)
		{
			temp = temp -> next;
		}
		temp -> next = temp -> next -> next;
		delete temp -> next -> prev;
		temp -> next -> prev = temp;
		Count--;
		//Head -> prev = Tail;
		//Tail -> next = Head;
	}
}

template<class T>
void DoublyCLL<T>::Display()
{
	int i = 0;
	struct node<T> *temp = Head;
	
	for(i = 1; i <= Count; i++)
	{
		cout<<"|"<<temp -> data<<"|";
		temp = temp -> next;
	}
	cout<<"\n";
}

template<class T>
int DoublyCLL<T>::CountNode()
{
	return Count;
}



int main()
{
	DoublyCLL <int>obj1;
	
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
	
	obj1.InsertAtPos(75,4);	
	obj1.Display();
	cout<<"Elements in Link list after Insert at position are: "<<obj1.CountNode()<<endl;	
	
	obj1.DeleteFirst();	
	obj1.Display();
	cout<<"Elements in Link list after delete first are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteLast();	
	obj1.Display();
	cout<<"Elements in Link list after delete last are: "<<obj1.CountNode()<<endl;
	
	obj1.DeleteAtPos(4);	
	obj1.Display();
	cout<<"Elements in Link list after delete at pos are: "<<obj1.CountNode()<<endl;		
	return 0;
}
