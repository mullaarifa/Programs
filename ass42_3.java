//Write Java Program to accept file name from user and open that file in write mode 
//and write some data at the end of file.

import java.io.*;
import java.util.*;


class ass42_3
{
    public static void main(String[] args)
    {
        try  
        {  
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The File Name:");
            String filename = sobj.nextLine();

            //constructor of file class having file as argument  
            FileWriter myWriter = new FileWriter(filename,true);
            myWriter.write(" Marvellous");
            myWriter.close();
            System.out.println("Successfully wrote to the file.");
        }  
        catch(Exception e)
        {
            System.out.println(e);
        }  

    }  
}
