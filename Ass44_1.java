//Write java program to accept directory name from user 
//and Display all name of files from that directory.

import java.io.*;
import java.util.*;

public class Ass44_1 
{
   public static void main(String args[]) throws IOException 
   {
    try
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the folder name:");
        String dirName = br.readLine();

        //Creating a File object for directory
        File directoryPath = new File(dirName);

        //List of all files and directories
        String contents[] = directoryPath.list();

        System.out.println("List of files and directories in the specified directory:");

        for(int i=0; i<contents.length; i++) 
        {
            if (!directoryPath.isFile()) 
            {
                System.out.println(contents[i]+" "+"File is a regular file.");
            } 
            else 
            {
                System.out.println("File is not a regular file.");
            }
        }
    }
    catch(Exception e)
    {
        System.out.println(e);
    }    
   }
}