//write a java program which accepts number of rows and number of columns from user and display below pattern.

//Input : iRow = 4     iCol = 4
//          1   2   3   4 
//Output :  *   *   *   #   4
//          *   *   #   *   3
//          *   #   *   *   2
//          #   *   *   *   1

import java.util.Scanner;

class Pattern
{
    public void Pattern1(int iRow, int iCol)
    {
        for(int i = iRow; i >= 1; i--)
        {
            for(int j= 1; j<= iCol; j++)
            {
                if(i == j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

class program45_1
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();
        obj.Pattern1(iRow, iCol);

        sobj.close();
    }
}
    
