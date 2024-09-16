// write a program which accepts matrix and swap the contents of consecutive row

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

    public void SwapRow(int iRow, int iCol)
    {
        int temp[] = new int[iRow]; 

        for(int i = 0 ; i < Arr.length ; i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                if((i % 2) == 0)
                {
                    temp[j] = Arr[i][j];
                }
                else
                {
                    // for(int k = 0 ; k < Arr[i].length ; k++)
                    // {
                    //     Arr[j][k] = Arr[i][k];
                    //     Arr[i][k] = temp[k];
                    // }
                    Arr[i-1][j] = Arr[i][j];
                    Arr[i][j] = temp[j];
                }
            }
        }
        Display();
    }
}

class program47_5
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

        obj.SwapRow(iRow, iCol);

        sobj.close();
    }
}