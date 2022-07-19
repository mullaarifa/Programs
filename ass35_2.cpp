//Write generic program which accept N values and count frequency of any specific value.
//INPUR:	10,20,30,10,30,40,10,40,10
//VAlue to check frequency:	10
//OUTPUT:	4

#include<iostream>
using namespace std;

template<class T>

int Frequency(T *arr, int iSize, T no)
{
	int i = 0, counter = 0;
	
	for(i = 0; i<iSize; i++)
	{
		if(arr[i] == no)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	
	int iRet = Frequency(arr,9,10);
	
	printf("%d\n",iRet);

	return 0;
}
