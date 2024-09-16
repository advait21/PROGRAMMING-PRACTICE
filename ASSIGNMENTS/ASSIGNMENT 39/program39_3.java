//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 3        iCol = 5

//Output :      5   4   3   2   1   
//              5   4   3   2   1
//              5   4   3   2   1

import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i,j = 0;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = iCol ; j > 0 ; j--)
            {
                System.out.print(j + "\t");
            }
            System.out.println();
        }
    }
}

class program39_3
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