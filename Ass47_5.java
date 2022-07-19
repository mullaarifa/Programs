//Write a Java program to accept string from user and Display it in reverse oreder.
//Input: MarvelloS
//Output: SollevraM

import java.io.*;
import java.util.*;

class Ass47_5
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            String newstr = str.replaceAll("\\s+"," ");
            String newstr2 = newstr.trim();

            String arr[] = newstr2.split(" ");

            StringBuffer finalstr = new StringBuffer();

            for(int i = 0; i < arr.length; i++)
            {
                StringBuffer sb = new StringBuffer(arr[i]);
                finalstr.append((sb.reverse()).append(" "));
            }

            String finalstr2 = new String(finalstr);
            System.out.println(finalstr2.trim());
      }
}