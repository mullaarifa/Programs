//Write generic program which accept N values and reverse the contents.
//INPUR:	10 20 30 10 30 40 10 40 10

//OUTPUT:	10 40 10 40 30 10 30 20 10

#include<iostream>
using namespace std;

template<class T>

void Reverse(T *arr, int iSize)
{
	int i = 0;
	T temp;
	iSize = iSize-1;
	
	for(i = 0; i < iSize; i++,iSize--)
	{
		temp = arr[i];
		arr[i] = arr[iSize];
		arr[iSize] = temp;
	}
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	
	for(int i = 0; i < 9; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	Reverse(arr,9);
	
	for(int i = 0; i < 9; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}
