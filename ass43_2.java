//Write java program to accept file name from user and check whether that file is regular file or not.

import java.io.*;
import java.util.*;

public class ass43_2 {

    public static void main(String[] args) throws IOException 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The File Name to be opened:");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if (file.isFile()) 
        {
            System.out.println("File is a regular file.");
        } 
        else 
        {
            System.out.println("File is not a regular file.");
        }
    }
}