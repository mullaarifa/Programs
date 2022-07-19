//Write java prgram which accept number from user and return the count of digits in between 3 and 7.

//Input:    2395
//Output:   1

//Input:    1018
//Output:   0

//Input:    4521
//Output:   2

//Input:    9922
//Output:   0

import java.lang.*;
import java.util.*;

class Digit
{
    public int CountRange(int iNo)
    {
        int iDigit = 0, iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit > 3) && (iDigit < 7))
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class Ass49_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number");
        int no = sobj.nextInt();
         
        Digit dobj = new Digit();

        int iRet = dobj.CountRange(no);
        System.out.println("The Count of digits in between 3 and 7 is: "+iRet);
    }
}