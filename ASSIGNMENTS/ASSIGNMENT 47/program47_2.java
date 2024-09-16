// write a program which accepts matrix and one number from user and return the frequency of that number

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

    public int Frequency(int iRow, int iCol, int iNo)
    {
        int iCount = 0;

        for(int i = 0 ; i < Arr.length ; i++)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }
}

class program47_2
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        int iCol = sobj.nextInt();

        System.out.println("Enter the frequency of number");
        int iNo = sobj.nextInt();

        Matrix obj = new Matrix(iRow, iCol);
        obj.Accept();
        obj.Display();

        int iRet = obj.Frequency(iRow, iCol, iNo);
        System.out.println("The frequency of element is : " + iRet);

        sobj.close();
    }
}