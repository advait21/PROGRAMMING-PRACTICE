//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 3        iCol = 4

//Output :      1   2   3   4
//              5   6   7   8
//              9   10  11  12
//              

import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i,j = 0;
        int temp = 1;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = temp ; j < (iCol + temp) ; j++)
            {
                System.out.print(j + "\t");
            }
            temp = j;
            System.out.println();
        }
    }
}

class program38_5
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