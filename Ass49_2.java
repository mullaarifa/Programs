//Write java prgram which accept number from user and return count of odd digits.

//Input:    2395
//Output:   3

//Input:    1018
//Output:   2

//Input:    -1018
//Output:   2

//Input:    8462
//Output:   0

import java.lang.*;
import java.util.*;

class Digit
{
    public int CountOdd(int iNo)
    {
        int iDigit = 0, iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) != 0)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class Ass49_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number");
        int no = sobj.nextInt();
         
        Digit dobj = new Digit();

        int iRet = dobj.CountOdd(no);
        System.out.println("Count of odd digits in the give number is: "+iRet);
    }
}