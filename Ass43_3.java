//Write java program to accept directory name from user and create that directory.

import java.io.*;
import java.util.*; 

class Ass43_3 { 

	public static void main(String args[]) 
	{ 
		Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The Folder Name to be created:");
        String foldername = sobj.nextLine();

        File folder = new File(foldername);

		if (folder.mkdir() == true) { 
			System.out.println("Directory has been created successfully"); 
		} 
		else { 
			System.out.println("Directory cannot be created"); 
		} 
	} 
} 
