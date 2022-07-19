//Write java program to accept file name from user 
//calculate checksum of that file and display on screen.

import java.io.*;
import java.security.*;
import java.util.zip.*;

public class Ass43_4 
{
    public static void main(String[] args) throws NoSuchAlgorithmException, IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the folder name:");
        String filename = br.readLine();

        File file = new File(filename);

        doChecksum32(filename);
    }

    private static void doChecksum32(String fileName) {
        try {
            CheckedInputStream cis = null;
            long fileSize = 0;
            try {
                // Computer CRC32 checksum
                cis = new CheckedInputStream(
                        new FileInputStream(fileName), new CRC32());
                fileSize = new File(fileName).length();
            } catch (FileNotFoundException e) {
                System.err.println("File not found.");
                System.exit(1);
            }
            byte[] buf = new byte[128];
            while (cis.read(buf) >= 0) {
            }
            long checksum = cis.getChecksum().getValue();
            System.out.println(checksum + " " + fileSize + " " + fileName);
        } catch (IOException e) {
            e.printStackTrace();
            System.exit(1);
        }
    }

}