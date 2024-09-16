// write a program which accepts matrix and display addition of elements from each column

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

    public int[] AddColumn(int iRow, int iCol)
    {
        int Arr1[] = new int[iRow];

        for(int i = 0 ; i < Arr.length ; i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                Arr1[j] = Arr1[j] + Arr[i][j];
            }
        }
        return Arr1;
    }
}

class program47_4
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

        int Arr[] = new int[iRow];
        Arr = obj.AddColumn(iRow, iCol);
        
        for(int i = 0 ; i < Arr.length ; i++)
        {
            System.out.print(Arr[i] + "\t");
        }

        sobj.close();
    }
}