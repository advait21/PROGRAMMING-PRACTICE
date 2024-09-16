//write a java program which accepts array from user and reverse each number of that array

//Input :  89    687     56      549     87      9
//          
//Output:  98    786     65      945     78      9     

import java.util.Scanner;

class MyArray
{
    public void ReverseArray(int arr[])
    {
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            int iDigit = 0;
            int temp = 0;

            while(arr[iCnt] != 0)
            {
                iDigit = arr[iCnt] % 10;
                
                temp = (temp*10) + iDigit;
                
                arr[iCnt] = arr[iCnt] / 10;
            }
            arr[iCnt] = temp;
        }
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            System.out.println(arr[iCnt]);
        }
    }
}

class program46_1
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter the elements: ");

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            arr[iCnt] = sobj.nextInt();
        }
        MyArray obj = new MyArray();
        obj.ReverseArray(arr);

        sobj.close();
    }
}