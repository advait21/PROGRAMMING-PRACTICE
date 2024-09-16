// Write a java program which accepts number from user and return the count of even digits

import java.util.Scanner;

class Digit
{
    public int CountEven(int iNo)
    {
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iCount++;
            }

            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program35_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNumber = sobj.nextInt();

        Digit obj = new Digit();
        
        int iRet = obj.CountEven(iNumber);

        System.out.println("Number of even digits are : " + iRet);
        
        sobj.close();
    }
}