// Write a java program which accepts N numbers from user and display elements divisible by 5 and are even

import java.util.Scanner;

class ArrayDemo
{
    public void Display(int Arr[])
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 2) == 0))
            {
                System.out.print(Arr[iCnt] + "\t");
            }
        }
    }
}

class program34_3
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
        
        System.out.println("Numbers divisible by 5 and are even are : ");
        obj.Display(Arr);

        sobj.close();
    }
}