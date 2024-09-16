//write a java program which accept two arrays from user and copy that contents of that array into another array in reverse order and return new array

//Input :   1   2   3
//          4   5

//Output :  5   4   3   2   1

import java.util.Scanner;

class MyArray
{
    public int[] CopyArrayRev(int arr1[], int arr2[])
    {
        int arr3[] = new int[(arr1.length + arr2.length)];

        for(int i = 0, j = (arr2.length - 1) ; i < arr2.length ; i++, j--)
        {
            arr3[i] = arr2[j];
        }

        for(int i = arr2.length, j = (arr1.length - 1) ; i < (arr1.length + arr2.length) ; i++, j--)
        {
            arr3[i] = arr1[j];
        }
        return arr3;
    }
}

class program43_3
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of first array");
        int iSize1 = sobj.nextInt();

        int arr1[] = new int[iSize1];
        System.out.println("Enter the elements of first array : ");

        for(int iCnt = 0 ; iCnt < iSize1 ; iCnt++)
        {
            arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter the size of second array");
        int iSize2 = sobj.nextInt();

        int arr2[] = new int[iSize2];
        System.out.println("Enter the elements of second array : ");

        for(int iCnt = 0 ; iCnt < iSize2 ; iCnt++)
        {
            arr2[iCnt] = sobj.nextInt();
        }

        MyArray obj = new MyArray();

        int arr3[] = new int[(iSize1 + iSize2)];

        arr3 = obj.CopyArrayRev(arr1, arr2);

        for(int iCnt = 0 ; iCnt < (iSize1 + iSize2) ; iCnt++)
        {
            System.out.print(arr3[iCnt] + " ");
        }

        sobj.close();
    }
}