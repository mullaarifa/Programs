//Write java program to accept directory name from user 
//and Display all name of files from that directory.

import java.io.*;
import java.util.*;
import java.nio.file.Files;
import java.nio.file.Path;

public class Ass44_2 
{
   public static void main(String args[]) throws IOException 
   {
    try
    {
       File dir = new File("F:\\Pre-Placement\\LB\\Java\\Assignments44\\LB");

       PrintWriter pw = new PrintWriter("OutPutFile.txt");

       String[] fileNames = dir.list();

       for(String fileName : fileNames) 
       {
          System.out.println("File Name:- " + fileName);

          File f = new File(dir, fileName);

          BufferedReader br = new BufferedReader(new FileReader(f));
          pw.println("file name in Directory " + fileName);
          
          pw.flush();
       }
    }
    catch(Exception e)
    {
        System.out.println(e);
    }  
}  
}