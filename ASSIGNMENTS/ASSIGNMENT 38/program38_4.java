//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 4        iCol = 5

//Output :      4   4   4   4   4
//              3   3   3   3   3
//              2   2   2   2   2
//              1   1   1   1   1

import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i,j = 0;

        for(i = iRow ; i > 0 ; i--)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print(i + "\t");
            }
            System.out.println();
        }
    }
}

class program38_4
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