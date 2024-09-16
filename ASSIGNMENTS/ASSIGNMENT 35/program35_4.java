// Write a java program which accepts number from user and return the multiplication of all digits

import java.util.Scanner;

class Digit
{
    public int Multiply(int iNo)
    {
        int iDigit = 0, iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iProduct = iProduct * iDigit;

            iNo = iNo / 10;
        }
        return iProduct;
    }
}

class program35_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNumber = sobj.nextInt();

        Digit obj = new Digit();
        
        int iRet = obj.Multiply(iNumber);

        System.out.println("Product of digits is : " + iRet);
        
        sobj.close();
    }
}