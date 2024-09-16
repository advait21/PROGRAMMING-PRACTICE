// Write a java program which accepts number from user and return the count of digits between 3 and 7

import java.util.Scanner;

class Digit
{
    public int CountRange(int iNo)
    {
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit > 3) && (iDigit < 7))
            {
                iCount++;
            }

            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program35_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNumber = sobj.nextInt();

        Digit obj = new Digit();
        
        int iRet = obj.CountRange(iNumber);

        System.out.println("Number of digits between 3 and 7 are : " + iRet);
        
        sobj.close();
    }
}