//Write Java program which accept N numbers from user and return product of all odd elements.

//Input:    N:  6
//          Elements:15  66  3  70  10  88
//Output:   45

//Input:    N:  6
//          Elements:44  66  10  72  70  88
//Output:   0

import java.lang.*;
import java.util.*;

class Number 
{
    public int Product(int Arr[])
    {
        int i = 0, iMult = 1;
        for(i = 0; i< Arr.length;i++)
        {
            if(Arr[i]%2 != 0)
            {
               iMult = iMult * Arr[i]; 
            }
            else if((Arr[i]%2) == 0)
            {
                iMult = 0;
            }
        }
        return iMult;
    }
}

class Ass50_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Element: ");
        int no = sobj.nextInt();

        int arr[] = new int[no];

        System.out.println("Enter The Values");

        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }

        Number nobj = new Number();

        int iRet = nobj.Product(arr); 

        System.out.println("Product of all odd elements in the array is: "+iRet);
    }
}
