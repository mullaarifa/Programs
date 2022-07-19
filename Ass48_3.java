//Write Java Program Which Accept N numbers from user and 
//Display all such elements which are even and divisible by 5.

//Input:    N:  6
//          Elements: 85  66  3  80  93  88

//Output:   80

import java.lang.*;
import java.util.*;

class ArrayDemo
{
    public void Display(int Arr[])
    {
        for(int i = 0; i<Arr.length; i++)
        {
            if(((Arr[i] % 2) == 0) && ((Arr[i] % 5) == 0))
            {
                System.out.println("Number which is even and divisible by 5 is: "+Arr[i]); 
            }
        }
    }
}

class Ass48_3
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
        aobj.Display(arr);
    }
}