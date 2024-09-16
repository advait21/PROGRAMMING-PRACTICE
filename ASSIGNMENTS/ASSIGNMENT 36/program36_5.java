// Write a java program which accepts N numbers from user and return multiplication of odd numbers

import java.util.Scanner;

class Number
{
    public int Product(int Arr[])
    {
        int iProduct = 1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iProduct = iProduct * Arr[iCnt];
            }
        }
        return iProduct;
    }
}

class program36_5
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

        Number obj = new Number();
        
        int iRet = obj.Product(Arr);

        System.out.println("Prouct of odd numbers is : " + iRet);

        sobj.close();
    }
}