//write a java program which accepts array from user and replace each member with summation of its digits

//Input :  89    687     56      549     87      9
//          
//Output:  17    21      11      18      15      9      

import java.util.Scanner;

class MyArray
{
    public void SumArray(int arr[])
    {
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            int iDigit = 0;
            int iSum = 0;

            while(arr[iCnt] != 0)
            {
                iDigit = arr[iCnt] % 10;
                
                iSum = iSum + iDigit;
                
                arr[iCnt] = arr[iCnt] / 10;
            }
            arr[iCnt] = iSum;
        }
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            System.out.println(arr[iCnt]);
        }
    }
}

class program46_2
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
        obj.SumArray(arr);

        sobj.close();
    }
}