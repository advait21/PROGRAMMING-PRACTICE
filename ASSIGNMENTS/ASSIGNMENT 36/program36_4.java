// Write a java program which accepts N numbers from user and accept range, display all elements from that range
    
import java.util.Scanner;

class Number
{
    public void Display(int Arr[], int iStart, int iEnd)
    {
        for(int iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}

class program36_4
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

        System.out.println("Enter the first element of range : ");
        int iNumber1 = sobj.nextInt();

        System.out.println("Enter the first element of range : ");
        int iNumber2 = sobj.nextInt();

        Number obj = new Number();
        
        obj.Display(Arr, iNumber1, iNumber2);

        sobj.close();
    }
}