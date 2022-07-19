//write a java program to accept two file names from user and open first file 
//and create new file(Second name) and copy the data from first file into newly created file.

import java.io.*;
import java.util.*;


class ass43_1
{
    public static void main(String[] args)throws Exception
    {
        try  
        {  
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The File Name to be opened:");
            String filename1 = sobj.nextLine();
            File file1=new File(filename1);   
            FileInputStream fis=new FileInputStream(file1);      
        
            System.out.println("File open Successfully...");

            System.out.println("Enter the file name to create:");
			String filename2 = sobj.nextLine();
			File file2 = new File(filename2);
            FileOutputStream fos = new FileOutputStream(file2);

            if (!file2.createNewFile()) 
            {
                System.out.println("File created: " + file2.getName());
            } 
            else
            {
                System.out.println("Failed to Create File Hence could not copy the content:");
            }

            int c;
			while ((c = fis.read()) != -1) {

				fos.write(c);
			}
			System.out.println(
				"copied the file successfully");
        } 
        catch(Exception e)
        {
            System.out.println(e);
        }  

    }  
}
