//Write a java program which accepts array of characters from user and return difference between frequency of capital characters and frequency of small characters.

import java.util.Scanner;

class MyArray
{
    int Difference(char arr[])
    {
        int iCount1 = 0, iCount2 = 0;
        
        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            if((arr[iCnt] >= 'A') && (arr[iCnt] <= 'Z'))
            {
                iCount1++;
            }
            else if((arr[iCnt] >= 'a') && (arr[iCnt] <= 'z'))
            {
                iCount2++;
            }
        }
        return (iCount1 - iCount2);
    }
}

class program44_4
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters of the array");
        String str = sobj.nextLine();
        
        char[] arr = str.toCharArray();

        MyArray obj = new MyArray();
        int iRet = obj.Difference(arr);

        System.out.println("The difference is : " + iRet);
        
        sobj.close();
    }
}