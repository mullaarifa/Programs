//Write a program which accept matrix from user and return addition of diagonal elements.

//Input:
//3 2 5 9
//4 3 2 2
//8 4 1 5 
//3 9 7 5 

//Output: 12

import java.lang.*;
import java.util.*;

class Ass45_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number Of Rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number Of Columns: ");
        int iCol = sobj.nextInt();

        int arr[][] = new int[iRow][iCol];
        int iSum = 0;
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
                if(i==j)
                {
                    iSum = iSum+arr[i][j];
                }
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
        System.out.println("Addition od Diagonal elements is: "+iSum);
    }
}