//write a java program which accept two arrays from user and return difference between summation of arrays.

//Input :   2   9   7   5   2   3
//          9   3   5   5

//Output :  6

import java.util.Scanner;

class MyArray
{
    public int DiffArray(int arr1[], int arr2[])
    {
        int iSum1 = 0, iSum2 = 0;

        for(int iCnt = 0 ; iCnt < arr1.length ; iCnt++)
        {
            iSum1 = iSum1 + arr1[iCnt];
        }

        for(int iCnt = 0 ; iCnt < arr2.length ; iCnt++)
        {
            iSum2 = iSum2 + arr2[iCnt];
        }
        return(iSum1 - iSum2);
    }
}

class program43_1
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
        int iRet = obj.DiffArray(arr1, arr2);

        System.out.println("The difference between the sum of two arrays is : " + iRet);

        sobj.close();
    }
}