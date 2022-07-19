//Write a generic program to accept N values from user and return addition of that number.

#include<iostream>
using namespace std;

template<class T>

T AddN(T *arr, int iSize)
{
	T iSum = 0;
	int i = 0;
	
	for(i = 0; i < iSize; i++)
	{
		iSum = iSum+arr[i];
	}
	return iSum;
}
int main()
{
	int Arr[] = {10,20,30,40,50};
	float Brr[] = {10.0,3.7,9.8,8.7};
	
	int sum = AddN(Arr,5);
	printf("%d\n",sum);
	
	float fSum = AddN(Brr,4);
	printf("%f",fSum);
	
	return 0;
}

