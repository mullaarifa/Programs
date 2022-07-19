//Write Java program which accept N numbers from user and accept range, Display all elements from that range.

//Input:    N:  6
//          Start:  60
//          End:    90    
//          Elements:85  66  3  76  93  88

//Output:   85  66  76  88

//Input:    N:  6
//          Start:  30
//          End:    50    
//          Elements:85  66  3  76  93  88

//Output:   85  66  76  88

import java.lang.*;
import java.util.*;

class Number 
{
    public void Display(int Arr[], int iStart, int iEnd)
    {
        int i = 0;
        for(i = 0; i< Arr.length;i++)
        {
            if((Arr[i]>iStart) && (Arr[i]<iEnd))
            {
                System.out.print(Arr[i]+"\t");
            }
        }
    }
}

class Ass50_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Element: ");
        int no = sobj.nextInt();

        System.out.println("Enter The Starting Number: ");
        int iStart = sobj.nextInt();

        System.out.println("Enter The Ending Number: ");
        int iEnd = sobj.nextInt();

        int arr[] = new int[no];

        System.out.println("Enter The Values");

        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }

        System.out.println();

        Number nobj = new Number();

        nobj.Display(arr, iStart, iEnd);
    }
}
