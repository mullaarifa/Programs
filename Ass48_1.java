//Write Java Program Which Accept N numbers from user and 
//Return Difference between summation of even elements and summation of odd elements.

//Input:    N:  6
//          Elements: 85  66  3  80  93  88

//Output:   53 (234 - 181)

import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public int Difference(int Arr[])
    {
        int iSumEven = 0, iSumOdd = 0, iDiff = 0;

        for(int i = 0; i<Arr.length; i++)
        {
            if((Arr[i] % 2) == 0)
            {
                iSumEven = iSumEven + Arr[i];
            }
            else if((Arr[i] % 2) != 0)
            {
                iSumOdd = iSumOdd + Arr[i];
            }
        }
        iDiff = iSumEven - iSumOdd;
        return iDiff;
    }
}

class Ass48_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of elements: ");
        int no = sobj.nextInt();

        int arr[] = new int[no];

        System.out.println("Enter The Elements: ");

        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }

        ArrayDemo aobj = new ArrayDemo();
        int iRet = aobj.Difference(arr);

        System.out.println("Difference between Summation of all even and odd elements are: "+iRet);
    }
}