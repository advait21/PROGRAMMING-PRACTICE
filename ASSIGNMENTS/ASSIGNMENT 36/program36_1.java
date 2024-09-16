// Write a java program which accepts N numbers from user and accept one another number NO, check whether NO is present or not

import java.util.Scanner;

class Number
{
    public boolean Check(int Arr[], int iNo)
    {
        boolean bFlag = false;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}

class program36_1
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
        
        boolean bRet = obj.Check(Arr, iNumber);

        if(bRet == true)
        {
            System.out.println("Number is present");
        }
        else
        {
            System.out.println("Number is absent");
        }

        sobj.close();
    }
}