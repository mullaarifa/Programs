//Write java prgram which accept number from user and return multiplication of all digits.

//Input:    2395
//Output:   270

//Input:    1018
//Output:   8

//Input:    9440
//Output:   144

//Input:    922432
//Output:   864

import java.lang.*;
import java.util.*;

class Digit
{
    public int Multiply(int iNo)
    {
        int iDigit = 0, iMult = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
}

class Ass49_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Number");
        int no = sobj.nextInt();
         
        Digit dobj = new Digit();

        int iRet = dobj.Multiply(no);
        System.out.println("Multiplication of all digits is: "+iRet);
    }
}