//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 4        iCol = 4

//Output :      *   #   *   # 
//              *   #   *   #
//              *   #   *   #
//              *   #   *   #

import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i,j = 0;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                if((j % 2) == 0)
                {
                    System.out.print("#" + "\t");
                }
                else
                {
                    System.out.print("*" + "\t");
                }
            }
            System.out.println();
        }
    }
}

class program39_4
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows and columns : ");

        int iRow = sobj.nextInt();
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();
        obj.Pattern(iRow, iCol);

        sobj.close();
    }    
}