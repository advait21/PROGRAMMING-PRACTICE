//Write a java program which accepts array of characters from user and replace each capital character with its corresponding small character.
//Input :     b    N    j    B    b     A    d    G    G

//Output :    b    n    j    b    b     a    d    g    g

import java.util.Scanner;

class MyArray
{
    public void ArrayReplace(char arr[])
    {
        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            if((arr[iCnt] >= 'A') && (arr[iCnt] <= 'Z'))
            {
                arr[iCnt] = (char) (arr[iCnt] + 32);
            }
        }

        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            System.out.print(arr[iCnt]);
        }
    }
}

class program44_1
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters of the array");
        String str = sobj.nextLine();
        
        char[] arr = str.toCharArray();

        MyArray obj = new MyArray();
        obj.ArrayReplace(arr);
        
        sobj.close();
    }
}