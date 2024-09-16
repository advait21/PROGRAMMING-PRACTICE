// Write a java program which accepts N numbers from user and calculate difference between summation of even and odd elements

import java.util.Scanner;

class ArrayDemo
{
    public int Difference(int Arr[])
    {
        int iSumEven = 0, iSumOdd = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }
        return (iSumEven  - iSumOdd);
    }
}

class program34_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int number_of_elements = sobj.nextInt();

        int Arr[] = new int[number_of_elements];
        System.out.println("Enter the elements : ");

        for(int iCnt = 0 ; iCnt < number_of_elements ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayDemo obj = new ArrayDemo();
        
        int iRet = obj.Difference(Arr);
        System.out.println("Difference between summation of even and odd elements is : " + iRet);

        sobj.close();
    }
}