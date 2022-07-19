//Write generic program which accept onr value and one number from user.
//Print that value that number of times on screen.
//INPUT:	M	7
//OUTPUT:	M M M M M M M 

//INPUT:	11	3
//OUTPUT:	11 11 11

//INPUT:	3.7 	6 
//3.7 3.7 3.7 3.7 3.7 3.7 

#include<iostream>
using namespace std;

template<class T>

void Display(T value, int iSize)
{
	int i = 0;
	
	for(i = 0; i<iSize; i++)
	{
		cout<<value<<" ";
	}
	cout<<endl;
}

int main()
{
	Display('M',7);
	Display(11,3);
	Display(3.7,6);

	return 0;
}
