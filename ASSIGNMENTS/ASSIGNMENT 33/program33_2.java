// Write a java program which accepts string from user and count number of small characters

import java.util.Scanner;

class StringDemo
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program33_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        StringDemo obj = new StringDemo();
        
        int iRet = obj.CountSmall(name);
        System.out.println("Number of Small character are: " + iRet);

        sobj.close();
    }
}