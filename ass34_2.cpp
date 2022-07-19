//Write a program to find largest number from three numbers. 

#include<iostream>
using namespace std;

template<class T>

T Max(T no1, T no2, T no3)
{
	T temp;
	
	if(no1 > no2)
	{
		temp = no1;
	}
	else
	{
		temp = no2;
	}
	if(no3 > temp)
	{
		temp = no3;
	}
	return temp;
}
int main()
{
	int iRet = Max(10,20,30);
	printf("%d\n", iRet);
	
	float fRet = Max(10.5f,20.2f,15.2f);
	printf("%f\n", fRet);
	return 0;
}

