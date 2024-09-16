//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :     1   2   3   4   5   6   7
//              1   2   3   4   5   6   7   8
//              1   2   3   4
//              1   2   3   4   5   6

import java.util.Scanner;

class PatternPrinting
{
    public void Pattern(int iNo)
    {     
        int iDigit = 0;

        if(iNo != 0)
        {
            iDigit = iNo % 10;

            iNo = iNo / 10;
            Pattern(iNo);

            for(int i = 1 ; i <= iDigit ; i++)
            {
                System.out.print(i + "\t");
            }
            System.out.println();            
        }
    }
}

class program49_3
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();

        PatternPrinting obj = new PatternPrinting();
        obj.Pattern(iNo);

        sobj.close();
    }
}