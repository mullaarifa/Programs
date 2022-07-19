//Write a program which accept matrix from user and display addition of elements from each column.

//Input:
//3 2 5 9
//4 3 2 2
//8 4 1 5 
//3 9 7 5 

//Output: 12


import java.lang.*;
import java.util.*;

class Ass45_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number Of Rows");
        int irow = sobj.nextInt();
        
        System.out.println("Enter Number Of Columns");
        int icol = sobj.nextInt();

        int arr[][] = new int[irow][icol];
        int iSum = 0;

        System.out.println("Enter The Element");
        for(int i = 0; i<arr.length; i++)
        {
            for(int j = 0;j<arr[i].length; j++)
            {
                arr[i][j] = sobj.nextInt();
            }
        }
        for(int i = 0; i<arr.length; i++)
        {
            for(int j = 0;j<arr[i].length; j++)
            {
                iSum = iSum + arr[j][i];
            }
            System.out.println("Addition of colmun is: "+iSum);
            iSum = 0;
        }
    }
}