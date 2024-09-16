// write a program which accepts matrix and return addition of diagonal elements

import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements ");

        for(int i = 0 ; i < Arr.length ; i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        sobj.close();
    }
    
    public void Display()
    {
        for(int i = 0 ; i < Arr.length ; i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public int Addition(int iRow, int iCol)
    {
        int iSum = 0;

        if(iRow != iCol)
        {
            return -1;
        }

        for(int i = 0 ; i < Arr.length ; i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }
}

class program47_1
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        int iCol = sobj.nextInt();

        Matrix obj = new Matrix(iRow, iCol);
        obj.Accept();
        obj.Display();

        int iRet = obj.Addition(iRow, iCol);
        System.out.println("The sum of elements of diagonals is : " + iRet);

        sobj.close();
    }
}