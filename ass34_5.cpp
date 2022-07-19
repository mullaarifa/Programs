//Write a generic program to accept N values from user and return smallest values.

#include<iostream>
using namespace std;

template<class T>

T Min(T *arr, int iSize)
{
	T iMin = arr[0];
	int i = 0;
	
	for(i=0; i<iSize; i++)
	{
		if(arr[i]<iMin)
		{
			iMin = arr[i];
		}
	}
	return iMin;
}
int main()
{
	int Arr[] = {10,20,30,40,50};
	float Brr[] = {10.0,3.7,9.8,8.7};
	
	int iRet = Min(Arr,5);
	printf("%d\n",iRet);
	
	float fRet = Min(Brr,4);
	printf("%f",fRet);
	
	return 0;
}

