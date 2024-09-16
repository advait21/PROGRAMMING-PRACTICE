//Write a java program which accepts array of characters from user and accept one character. Return occurrence of that character without considering case.
//Input : b    N    e    B    R    b    A    i    G    i    B    b
//Output : 4

import java.util.Scanner;

class MyArray
{
    int Search(char arr[], char toFind)
    {
        int iCount = 0;
        int gap = 'a' - 'A';
        
        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            if((arr[iCnt] == toFind) || (arr[iCnt] == toFind+gap) || (arr[iCnt] == toFind-gap))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program44_3
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters of the array");
        String str = sobj.nextLine();

        System.out.println("Enter the character to find");
        char ch = sobj.next().charAt(0);
        
        char[] arr = str.toCharArray();

        MyArray obj = new MyArray();
        int iRet = obj.Search(arr, ch);

        System.out.println("The number of occurances are : " + iRet);
        
        sobj.close();
    }
}