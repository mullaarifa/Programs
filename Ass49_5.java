//Write java prgram which accept number from user and 
//return difference between summation of even digits and summation of odd digits.

//Input:    2395
//Output:   -15(2 - 17)

//Input:    1018
//Output:   6(8 - 2)

//Input:    8440
//Output:   16(16 - 0)

//Input:    5733
//Output:   -18(0 - 18)

import java.lang.*;
import java.util.*;

class Digit
{
    public int CountDiff(int iNo)
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iSumEven += iDigit;
            }
            else if((iDigit % 2) != 0)
            {
                iSumOdd += iDigit;
            }
            iNo = iNo / 10;
        }
        iDiff = iSumEven - iSumOdd;
        return iDiff;
    }
}

class Ass49_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number");
        int no = sobj.nextInt();
         
        Digit dobj = new Digit();

        int iRet = dobj.CountDiff(no);
        System.out.println("Difference between summation of even and odd digits are: "+iRet);
    }
}