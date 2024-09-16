//Write a java program which accepts array of characters from user and return count of capital characters
//Input :     b    N    j    B    b     A    d    G    G

//Output :    5

import java.util.Scanner;

class MyArray
{
    public int ArrayCapital(char arr[])
    {
        int iCount = 0;

        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            if((arr[iCnt] >= 'A') && (arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program46_3
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the characters of the array");
        String str = sobj.nextLine();
        
        char[] arr = str.toCharArray();

        MyArray obj = new MyArray();
        int iRet = obj.ArrayCapital(arr);

        System.out.println("The number of capital characters is : " + iRet);
        
        sobj.close();
    }
}