//Write an application which accept file name from user and create the file.
//INPUT:	Demo.txt
//OUTPUT:	File created successfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fName[20];
	char data[100];
	int iRet = 0;
	int fd = 0;	//fd:- file descriptor
	
	printf("Enter File Name To Create:\n");
	scanf("%s",fName);
	
	fd = creat(fName,0777);
	if(fd == -1)
	{
		printf("Unable to create file:\n");
		return -1;	//Failure
	}
	
	printf("File is Successfully created with FD %d\n",fd);
	
	return 0;
}
