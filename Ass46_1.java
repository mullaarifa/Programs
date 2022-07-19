//Write a program which accept matrix and display Trnspose of the matrix
//Input
//3 2 5 9
//4 3 2 2 
//8 4 1 5
//3 9 7 5

//Output
//3 4 8 3
//2 3 4 9
//5 2 1 7
//9 2 5 5

import java.lang.*;
import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Elements: ");
        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }
    public void Display()
    {
        for(int i = 0; i<Arr.length; i++)
        {
            for(int j = 0; j<Arr[i].length; j++)
            {
                System.out.println(Arr[i][j]+ " ");
            }
            System.out.println();
        }
    }

    public void Transpose()
    {
        for(int i = 0; i<iCol; i++)
        {
            for(int j = 0; j<iRow; j++)
            {
                System.out.println(Arr[j][i]+ " ");
            }
            System.out.println();
        }  
    }

}

class Ass46_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of row: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter The Number Of Column: ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();

        System.out.println();

        mobj.Transpose();
   }
}