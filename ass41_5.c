//Write a program which accept file from user and one count from user 
//and read that number of characters from starting position.
//Input:	Demo.txt	12
//Output:	Display first 12 characters from Demo.txt


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define FILESIZE 1024

void DisplayN(char FName[], int iSize)
{
	char Data[FILESIZE];
	int fd = 0, i = 0, iCnt = 0, iRet = 0;
	
	fd = open(FName, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file:\n");
		return;
	}
	
	printf("File open successfully:\n");
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iSize; i++)
		{
			printf("%c",Data[i]);
		}
	}
	printf("\n");
	close(fd);
}

int main()
{
	char fName[20];
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter File name to open:\n");
	scanf("%s",fName);
	
	printf("Enter the Number of characters to print from file:\n");
	scanf(" %d",&iValue);
	
	DisplayN(fName,iValue);

	return 0;
}
