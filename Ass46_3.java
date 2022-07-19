//Write a program which accept matrix and reverse the content of each column
//Input
//3 2 5 9
//4 3 2 2 
//8 4 1 5
//3 9 7 5

//Output
//3 9 7 5
//8 4 1 9
//4 3 2 2 
//3 2 5 9

import java.lang.*;
import java.util.*;

class Matrix
{
    public void ReverseCol(int Arr[][], int iRow, int iCol)
    {
        int iTemp = 0;

        for(int i = 0; i<Arr.length/2; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                iTemp = Arr[j][i];
                Arr[j][i] = Arr[j][Arr.length-i-1];
                Arr[j][Arr.length-i-1] = iTemp;
            }
        }  
    }
}
class Ass46_3
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

        mobj.ReverseCol(Arr, iRow, iCol);

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