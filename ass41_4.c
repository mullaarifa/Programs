//Write a program which accept file from user and one character from user 
//and count number of occurances of that character from that file.
//Input:	Demo.txt	'e'
//Output:	Number of small characters are: 6

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define FILESIZE 1024

int CountChar(char FName[], char ch)
{
	char Data[FILESIZE];
	int fd = 0, i = 0, iCnt = 0, iRet = 0;
	
	fd = open(FName, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file:\n");
		return -1;
	}
	
	printf("File open successfully:\n");
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iRet; i++)
		{
			if(Data[i] == ch)
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}

int main()
{
	char fName[20];
	char cValue;
	int iRet = 0;
	
	printf("Enter File name to open:\n");
	scanf("%s",fName);
	
	printf("Enter character:\n");
	scanf(" %c",&cValue);
	
	iRet = CountChar(fName,cValue);
	
	printf("Frequency of %c character is %d\n",cValue,iRet);

	return 0;
}
