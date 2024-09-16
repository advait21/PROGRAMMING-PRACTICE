//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :     6   #   #   #   #   #   #    
//              4   #   #   #   #   
//              8   #   #   #   #   #   #    #   #
//              7   #   #   #   #   #   #    #

import java.util.Scanner;

class PatternPrinting
{
    public void Pattern(int iNo)
    {
        int iDigit = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            for(int i = 1 ; i <= iDigit ; i++)
            {
                if(i == 1)
                {
                    System.out.print(iDigit + "\t" + "#\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            iNo = iNo / 10;
            System.out.println();            
        }
    }
}

class program49_6
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