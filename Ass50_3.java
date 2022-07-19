//Write Java program which accept N numbers from user 
//and accept one another number as NO, return index of last occurance of thet NO.

//Input:    N:  6
//          NO:  66   
//          Elements:85  66  3  66  93  88

//Output:   3

//Input:    N:  6
//          NO:  93  
//          Elements:85  66  3  66  93  88

//Output:   4

//Input:    N:  6
//          NO:  12  
//          Elements:85  11  3  15  11  111

//Output:   -1

import java.lang.*;
import java.util.*;

class Number 
{
    public int LastOcc(int Arr[], int no)
    {
        int i = 0;
        for(i = Arr.length-1; i>=0;i--)
        {
            if(Arr[i]==no)
            {
                 break;
            }
        }

        if(i==Arr.length)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}

class Ass50_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Element: ");
        int no = sobj.nextInt();

        System.out.println("Enter The Number That You Want Search in the Given Array: ");
        int iNo = sobj.nextInt();

        int arr[] = new int[no];

        System.out.println("Enter The Values");

        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }

        Number nobj = new Number();

        int iRet = nobj.LastOcc(arr, iNo);

        System.out.println("Last Occurance of "+iNo+ " is at index "+iRet);
    }
}
