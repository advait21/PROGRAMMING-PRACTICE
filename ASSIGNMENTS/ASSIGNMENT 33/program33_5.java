// Write a java program which accepts string from user and displays it in reverse order

import java.util.Scanner;

class StringDemo
{
    public void Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        for(int iCnt = (Arr.length - 1); iCnt >= 0 ; iCnt--)
        {
            System.out.print(Arr[iCnt]);
        }
    }
}

class program33_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        StringDemo obj = new StringDemo();
        
        obj.Reverse(name);

        sobj.close();
    }
}