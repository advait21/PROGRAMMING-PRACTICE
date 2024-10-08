//write a program which accepts matrix from user and reverse the content of each row

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

        System.out.println("Enter elements: ");
        for(int i = 0; i< Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        sobj.close();
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");
        for(int i = 0; i< Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void ReverseRow(int iRow, int iCol)
    {
        int arr1[] = new int[iCol];
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = (Arr[i].length - 1), k = 0; j >= 0; j--, k++)
            {
                arr1[k] = Arr[i][j];
            }
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = arr1[j];                
            }
        }
        Display();
    }
}

class program48_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol =0;

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);  
        mobj.Accept();
        mobj.Display();

        System.out.println("Matrix after reversing the rows is:");
        mobj.ReverseRow(iRow, iCol);

        sobj.close();
    }
}