// Write a java program which accept two arrays from user and display odd contents of each array

// Input :   2   9   7   5   2   3
//           45  6   12  18  23  4

// Output :  9  5   3
//           45 23

import java.util.Scanner;

class MyArray
{
    public void Display(int arr1[], int arr2[])
    {
        for(int iCnt = 0 ; iCnt < arr1.length ; iCnt++)
        {
            if((arr1[iCnt] % 2) != 0)
            {
                System.out.print(arr1[iCnt] + " ");
            }    
        }
        System.out.println();
        for(int iCnt = 0 ; iCnt < arr2.length ; iCnt++)
        {
            if((arr2[iCnt] % 2) != 0)
            {
                System.out.print(arr2[iCnt] + " ");
            } 
        }
    }
}

class program42_2
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
        obj.Display(arr1, arr2);

        sobj.close();
    }
}