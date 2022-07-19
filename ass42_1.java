//write a java program to accept file name from user and open that file.

import java.io.*;
import java.util.*;


class ass42_1
{
    public static void main(String[] args)throws Exception
    {
        try  
        {  
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The File Name:");
            String filename = sobj.nextLine();

            //constructor of file class having file as argument  
            File file=new File(filename);   
            FileInputStream fis=new FileInputStream(file);     //opens a connection to an actual file 
        
            System.out.println("File open Successfully...");
        }  
        catch(Exception e)
        {
            System.out.println(e);
        }  

    }  
}
