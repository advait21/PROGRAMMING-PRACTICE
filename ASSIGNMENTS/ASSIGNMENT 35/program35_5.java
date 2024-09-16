// Write a java program which accepts number from user and return the difference of summation of even digitsand odd digits

import java.util.Scanner;

class Digit
{
    public int CountDiff(int iNo)
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            iNo = iNo / 10;
        }
        return (iSumEven - iSumOdd);
    }
}

class program35_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNumber = sobj.nextInt();

        Digit obj = new Digit();
        
        int iRet = obj.CountDiff(iNumber);

        System.out.println("difference of summation of even digitsand odd digits is : " + iRet);
        
        sobj.close();
    }
}