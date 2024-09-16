//write a java program which accept two arrays from user and form new array which is combination of contents of first and second array.

//Input :   12  57  28  3
//          99  23  54  58  6   67

//Output :  12  57  28  3   99  23  54  58  6   67

import java.util.Scanner;

class MyArray
{
    public int[] ArrayConcat(int arr1[], int iSize1, int arr2[], int iSize2)
    {
        int arr3[] = new int[(iSize1 + iSize2)];

        for(int iCnt = 0 ; iCnt < iSize1 ; iCnt++)
        {
            arr3[iCnt] = arr1[iCnt];
        }

        for(int iCnt2 = iSize1, iCnt = 0 ; iCnt2 < (iSize1 + iSize2) ; iCnt2++, iCnt++)
        {
            arr3[iCnt2] = arr2[iCnt];
        }
        return arr3;
    }
}

class program42_4
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

        arr3 = obj.ArrayConcat(arr1, iSize1, arr2, iSize2);

        for(int iCnt = 0 ; iCnt < (iSize1 + iSize2) ; iCnt++)
        {
            System.out.print(arr3[iCnt] + " ");
        }

        sobj.close();
    }
}