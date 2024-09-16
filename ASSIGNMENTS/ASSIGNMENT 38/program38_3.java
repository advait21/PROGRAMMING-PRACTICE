//write a java program which accept number of rows and number of columns from the user and display below pattern

//Input:    iRow = 4        iCol = 5

//Output :      A   A   A   A   A
//              B   B   B   B   B
//              C   C   C   C   C
//              D   D   D   D   D

import java.util.Scanner;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i,j = 0;
        char ch = '\0';

        for(i = 1, ch = 'A' ; i <= iRow ; i++, ch++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print(ch + "\t");
            }
            System.out.println();
        }
    }
}

class program38_3
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