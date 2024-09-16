//write a java program which accept two arrays from user and display minimum element of each array.

//Input :   2   9   7   5   2   3
//          9   3   5   5

//Output :  2   3

import java.util.Scanner;

class MyArray
{
    public void MinArray(int arr1[], int arr2[])
    {
        int iMin = arr1[0];

        for(int iCnt = 0 ; iCnt < arr1.length ; iCnt++)
        {
            if(iMin > arr1[iCnt])
            {
                iMin = arr1[iCnt];
            }
        }
        System.out.println("Minimum element from first array is : " + iMin);

        iMin = arr2[0];
        for(int iCnt = 0 ; iCnt < arr2.length ; iCnt++)
        {
            if(iMin > arr2[iCnt])
            {
                iMin = arr2[iCnt];
            }
        }
        System.out.println("Minimum element from second array is : " + iMin);
    }
}

class program43_2
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

        System.out.println("Enter the size of second array");
        iSize = sobj.nextInt();

        int arr2[] = new int[iSize];
        System.out.println("Enter the elements of second array : ");

        for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            arr2[iCnt] = sobj.nextInt();
        }

        MyArray obj = new MyArray();
        obj.MinArray(arr1, arr2);

        sobj.close();
    }
}