//Write a program which accept matrix and check whether the matrix is sparse matrix or not.

//Input:
//1 0 3 0
//0 6 0 0 
//0 0 1 0 
//9 0 0 9

//Output 
//True

import java.lang.*;
import java.util.*;

class Matrix
{
    public boolean ChkSparse(int Arr[][], int iRow, int iCol)
    {
        int size = iRow * iCol;
        int iCnt = 0;    
            
        //Count all zero element present in matrix    
        for(int i = 0; i < iRow; i++)
        {    
            for(int j = 0; j < iCol; j++)
            {    
                if(Arr[i][j] == 0)
                {
                    iCnt++;
                }        
            }    
        }    

        if(iCnt > (size/2)) 
        {
            return true;
        }   
               
        else    
        {
            return false;
        }    
    }
}
class Ass46_5
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

        iRet =  mobj.ChkSparse(Arr, iRow, iCol);

        if(iRet == true)
        {
            System.out.println("Given matrix is a sparse matrix"); 
        }
        else
        {
            System.out.println("Given matrix is not a sparse matrix");
        }
   }
}