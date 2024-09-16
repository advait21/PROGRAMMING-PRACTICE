//Write a java program which accepts array of characters from user and return number of vowels
//Input :     b    N    e   B   R   b   A   i   G   i

//Output :    4

import java.util.Scanner;

class MyArray
{
    int ArrayCountVowels(char arr[])
    {
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            if((arr[iCnt] == 'A') || (arr[iCnt] == 'E') || (arr[iCnt] == 'I') || (arr[iCnt] == 'O') || (arr[iCnt] == 'U') || (arr[iCnt] == 'a') || (arr[iCnt] == 'e') || (arr[iCnt] == 'i') || (arr[iCnt] == 'o') || (arr[iCnt] == 'u'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program44_2
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters of the array");
        String str = sobj.nextLine();
        
        char[] arr = str.toCharArray();

        MyArray obj = new MyArray();
        int iRet = obj.ArrayCountVowels(arr);

        System.out.println("The number of vowels are : " + iRet);
        
        sobj.close();
    }
}