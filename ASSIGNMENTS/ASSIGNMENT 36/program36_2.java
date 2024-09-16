// Write a java program which accepts N numbers from user and accept one another number NO, return first index of NO 

import java.util.Scanner;

class Number
{
    public int FirstOcc(int Arr[], int iNo)
    {
        int index = -1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                index = iCnt;
                break;
            }
        }
        return index;
    }
}

class program36_2
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

        System.out.println("Enter the number to be checked : ");
        int iNumber = sobj.nextInt();

        Number obj = new Number();
        
        int iRet = obj.FirstOcc(Arr, iNumber);

        if(iRet == -1)
        {
            System.out.println("Number not found");
        }
        else
        {
            System.out.println("First index of number is : " + iRet);
        }

        sobj.close();
    }
}