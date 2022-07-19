//Write Java Program to accept file name from user and create new file of that name if it is not exising.


import java.io.*;
import java.util.*;


public class ass42_4 {

	public static void main(String args[])
	{
        try 
        {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

			System.out.println("Enter the file name:");
			// Reading File name
			String strName = br.readLine();

			File file = new File(strName);

            if (file.createNewFile()) 
            {
                System.out.println("File created: " + file.getName());
            } 
            else 
            {
                System.out.println("File already exists.");
            }
		}

		catch(Exception e)
        {
            System.out.println(e);
        }  
	}
}
