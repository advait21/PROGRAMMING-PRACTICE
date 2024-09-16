// Write a java program which accepts string from user and calculate difference between number of small characters and number of capital characters

import java.util.Scanner;

class StringDemo
{
    public int CountDiff(String str)
    {
        char Arr[] = str.toCharArray();
        int iCountSmall = 0, iCountCapital = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCountSmall++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCountCapital++;
            }
        }
        return (iCountSmall-iCountCapital);
    }
}

class program33_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        StringDemo obj = new StringDemo();
        
        int iRet = obj.CountDiff(name);
        System.out.println("Difference between small and capital characters is : " + iRet);

        sobj.close();
    }
}