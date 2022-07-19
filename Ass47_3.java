//Write a Java program to accept string from user and return difference between 
//frequency of small characters and frequency of capital characters.
//Input: MarvelloS
//Output: 6

import java.io.*;
import java.util.*;

class Ass47_3
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            char arr[] = str.toCharArray();
            int SmallCnt = 0, CapitalCnt = 0, iDiff = 0;

            for(int i = 0; i < arr.length; i++)
            {
                if((arr[i] >='a') && (arr[i] <= 'z')) 
                {
                    SmallCnt++;
                }
            }

            for(int i = 0; i < arr.length; i++)
            {
                if((arr[i] >='A') && (arr[i] <= 'Z')) 
                {
                    CapitalCnt++;
                }
            }
            iDiff = SmallCnt - CapitalCnt;
            System.out.println(SmallCnt+" - "+CapitalCnt+ " = "+iDiff);
            System.out.println("Difference between frequency of small and capital character is : "+iDiff);
    }
}