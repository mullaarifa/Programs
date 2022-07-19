//Write a Java program to accept string from user and Count Number of capital characters.
//Input: Marvellos Multi OS
//Output: 4

import java.io.*;
import java.util.*;

class Ass47_1
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            char arr[] = str.toCharArray();
            int iCnt = 0;

            for(int i = 0; i < arr.length; i++)
            {
                if((arr[i] >='A') && (arr[i] <= 'Z')) 
                {
                    iCnt++;
                }
            }

            System.out.println("Number of capital case letters are : "+iCnt);
    }
}