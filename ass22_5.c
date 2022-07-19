//Accept Division of student from user and depends on the division display exam time.
//There are 4 Division in school as A,B,C,D.
//Exam of Division A At 7AM, B At 8.30AM, C At 9.20AM and D At 10.30AM.(Application should be case insensitive)
//INPUT: 	C
//OUTPUT:	Your Exam at 9.20AM
//INPUT: 	d
//OUTPUT:	Your Exam at 10.30AM

#include<stdio.h>

/*void DisplaySchedule(char iChar)
{
	switch(iChar)
	{
		case 'A':
			printf("Your Exam At 7AM\n");
			break;
		case 'B':
			printf("Your Exam At 8.30AM\n");
			break;
		case 'C':
			printf("Your Exam At 9.20AM\n");
			break;
		case 'D':
			printf("Your Exam At 10.30AM\n");
			break;
		case 'a':
			printf("Your Exam At 7AM\n");
			break;
		case 'b':
			printf("Your Exam At 8.30AM\n");
			break;
		case 'c':
			printf("Your Exam At 9.20AM\n");
			break;
		case 'd':
			printf("Your Exam At 10.30AM\n");
			break;
		default:
			printf("Invalid Division\n");
	}
}*/

void DisplaySchedule(char iChar)
{
	if(iChar == 'A' || iChar == 'a')
	{
		printf("Your Exam At 7AM\n");
	}
	else if(iChar == 'B' || iChar == 'b')
	{
		printf("Your Exam At 8.30AM\n");
	}
	else if(iChar == 'C' || iChar == 'c')
	{
		printf("Your Exam At 9.20AM\n");
	}
	else if(iChar == 'D' || iChar == 'd')
	{
		printf("Your Exam At 10.30AM\n");
	}
	else
	{
		printf("Invalid Division\n");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Your Division\n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
}
