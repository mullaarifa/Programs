//Write generic program which accept N values and search first occurance of any specific value.
//INPUR:	10,20,30,10,30,40,10,40,10
//VAlue to search:	40
//OUTPUT:	6

#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T *arr, int iSize, T no)
{
	int i = 0, counter = 0;
	
	for(i = 0; i<iSize; i++)
	{
		if(arr[i] == no)
		{
			break;
		}
	}
	return i + 1;
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	
	int iRet = SearchFirst(arr,9,40);
	
	printf("%d\n",iRet);

	return 0;
}
