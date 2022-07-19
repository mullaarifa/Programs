//Write a program which accept matrix and one number from user and return frequency of that number.

//Input:
//Number: 9

//3 2 5 9
//4 3 2 2
//8 4 1 9 
//3 9 7 5 

//Output: 3

import java.lang.*;
import java.util.*;

class Ass45_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number Of Rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number Of Columns: ");
        int iCol = sobj.nextInt();

        System.out.println("Enter The Number that you want to check the frequency of that number: ");
        int no = sobj.nextInt();

        int arr[][] = new int[iRow][iCol];
        int iCnt = 0;
        int i = 0;
        int j = 0;

        System.out.println("Enter Elements: ");

        for(i = 0; i<iRow; i++)
        {
            for(j = 0; j<iCol; j++)
            {
                arr[i][j] = sobj.nextInt();
            }
        }

        for(i = 0; i<iRow; i++)
        {
            for(j = 0; j<iCol; j++)
            {
                if(arr[i][j] == no)
                {
                    iCnt++;
                }
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
        System.out.println("Frequency of " +no+ " is: "+iCnt);
    }
}