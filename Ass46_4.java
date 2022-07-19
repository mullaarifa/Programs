//Write a program which accept matrix and check whether the matrix is identity matrix or not.

//Input:
//1 0 0 0
//0 1 0 0 
//0 0 1 0 
//0 0 0 1

//Output 
//True

import java.lang.*;
import java.util.*;

class Matrix
{
    public boolean ChkIdentity(int Arr[][], int iRow, int iCol)
    {
        if(iRow != iCol)
        {    
            System.out.println("Matrix should be a square matrix");    
        }    
        else 
        {    
            //Checks if diagonal elements are equal to 1 and rest of elements are 0    
            for(int i = 0; i < iRow; i++)
            {    
                for(int j = 0; j < iCol; j++)
                {    
                    if(i == j && Arr[i][j] != 1)
                    {    
                        return false;    
                    } 

                    if(i != j && Arr[i][j] != 0)
                    {    
                        return false;   
                    }    
                }    
            }    
        }
    return true;
    }
}
class Ass46_4
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
        boolean iRet;

        iRet =  mobj.ChkIdentity(Arr, iRow, iCol);

        if(iRet == true)
        {
            System.out.println("Matrix is an identity matrix: ");
        }
        else
        {
            System.out.println("Matrix is not an identity matrix: ");
        }
   }
}