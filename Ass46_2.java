//Write a program which accept matrix and reverse the content of each row
//Input
//3 2 5 9
//4 3 2 2 
//8 4 1 5
//3 9 7 5

//Output
//9 5 2 3
//2 2 3 4
//9 1 4 8
//5 7 9 3

import java.lang.*;
import java.util.*;

class Matrix
{
    public void ReverseRow(int Arr[][], int iRow, int iCol)
    {
        int iTemp = 0;

        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length/2; j++)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i][Arr[i].length-j-1];
                Arr[i][Arr[i].length-j-1] = iTemp;
            }
        }  
    }
}
class Ass46_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of row: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter The Number Of Column: ");
        int iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter The Elements: ");
        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+ " ");
            }
            System.out.println();
        }

        Matrix mobj = new Matrix();

        mobj.ReverseRow(Arr, iRow, iCol);

        System.out.println();
        
        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+ " ");
            }
            System.out.println();
        }
   }
}