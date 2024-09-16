// Write a java program which accepts N numbers from user and display elements multiples of 11

import java.util.Scanner;

class ArrayDemo
{
    public void Display(int Arr[])
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 11) == 0)
            {
                System.out.print(Arr[iCnt] + "\t");
            }
        }
    }
}

class program34_5
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
        
        System.out.println("Numbers multiples of 11 are : ");
        obj.Display(Arr);

        sobj.close();
    }
}