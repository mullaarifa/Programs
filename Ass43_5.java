//Write java program to accept directory name from user 
//and Display all name of files from that directory and size of each file on screen.

import java.io.*;
import java.util.*;

public class Ass43_5 
{
   public static void main(String args[]) throws IOException 
   {
    try
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the folder name:");
        String dirName = br.readLine();

        File directoryPath = new File(dirName);

        File filesList[] = directoryPath.listFiles();

        System.out.println("List of files and directories in the specified directory:");
        for(File file : filesList) 
        {
            System.out.println("File name: "+file.getName());
            //System.out.println("File path: "+file.getAbsolutePath());
            System.out.println("Size :"+file.getTotalSpace());
            System.out.println(" ");
        }
    }
    catch(Exception e)
    {
        System.out.println(e);
    }    
   }
}