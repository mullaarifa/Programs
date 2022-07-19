//Write Java program which accept N numbers from user 
//and accept one another number as NO, check NO is present or not.

//Input:    N:  6
//          NO:  66   
//          Elements:85  66  3  66  93  88

//Output:   TRUE

//Input:    N:  6
//          NO:  12  
//          Elements:85  11  3  15  11  111

//Output:   FALSE

import java.lang.*;
import java.util.*;

class Number 
{
    public boolean Check(int Arr[], int no)
    {
        int i = 0;
        for(i = 0; i<Arr.length;i++)
        {
            if(Arr[i]==no)
            {
                break;
            }
        }
        if(i==Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class Ass50_1
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

        boolean bRet = nobj.Check(arr, iNo);

        if(bRet == true)
        {
            System.out.println(iNo+" is Present in the array");
        }
        else
        {
            System.out.println(iNo+" is not present in the array");
        }
    }
}
