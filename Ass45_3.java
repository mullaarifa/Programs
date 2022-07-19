//Write a program which accept matrix from user and return largest number from both the diagonals.

//Input:
//3 2 5 9
//4 3 2 2
//8 4 1 5 
//3 9 7 5 

//Output: 5
//Output: 9

import java.lang.*;
import java.util.*;

class Ass45_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number Of Rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number Of Columns: ");
        int iCol = sobj.nextInt();

        int arr[][] = new int[iRow][iCol];
        int iMax = arr[0][0];
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
                if(i == j)
                {    
                    if(arr[i][j] > iMax)
                        {
                            iMax = arr[i][j];
                        }
                }
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
        System.out.println("Maximun number of diagonal elements is: "+iMax);
        
        for(i = 0; i<iRow; i++)
        {
            for(j = iCol-1; j>=0; j--)
            {
                if(i == j)
                {    
                    if(arr[i][j] > iMax)
                        {
                            iMax = arr[i][j];
                        }
                }
                System.out.print(arr[i][j]+ " ");
            }
            System.out.println();
        }
        System.out.println("Maximun number of diagonal elements is: "+iMax);
    }
}