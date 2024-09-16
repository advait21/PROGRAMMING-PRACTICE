//Write a java program which accepts array of characters from user and display below pattern
//Input :     8     9   4

//Output :    *   *   *   *   *   *   *   *   
//            *   *   *   *   *   *   *   *   *
//            *   *   *   *   

import java.util.Scanner;

class MyArray
{
    public void Pattern(int[] arr)
    {
        for(int iCnt = 0 ; iCnt < arr.length ; iCnt++)
        {
            for(int j = 0; j < arr[iCnt] ; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class program44_5
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array");
        int iSize = sobj.nextInt();

        int arr1[] = new int[iSize];
        System.out.println("Enter the elements of first array : ");

        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            arr1[iCnt] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
        obj.Pattern(arr1);

        sobj.close();
    }
}