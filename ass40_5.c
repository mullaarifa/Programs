//Write an application which accept file name from user and one string from user.
//Write that string at the end of file.
//INPUT:	Demo.txt
//		Hello World.

//OUTPUT:	Write Hello world at the end of Demo.txt file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int fd = 0, iRet = 0;
	char fName[20];
	char Data[100];

	printf("Enter File Name to open:\n");
	scanf("%s",fName);
	
	fd = open(fName, O_RDWR | O_APPEND);
	
	if(fd == -1)
	{
		printf("Unable to open the file:\n");
		return 0;
	}
	printf("File successfully open:\n");
	
	printf("Enter data that you want to write:\n");
	scanf(" %[^'\n']s",Data);
	
	write(fd,Data,strlen(Data));
	
	printf("Data successfully written in the file:\n");
	return 0;
}
