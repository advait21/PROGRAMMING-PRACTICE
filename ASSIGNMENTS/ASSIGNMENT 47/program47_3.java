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

    public int Maximum(int iRow, int iCol)
    {
        int iMax = Arr[0][0];

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
                    if(Arr[i][j] > iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }
                    // 0   1   2
                    // 1   2   9    2
                    // 4   5   6    1
                    // 7   8   3    0

        for(int i = (Arr.length - 1); i >= 0; i--)
        {
            for(int j = 0 ; j < Arr[i].length ; j++)
            {
                if(i == j)
                {
                    if(iMax < Arr[i][j])
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }
        return iMax;
    }
}

class program47_3
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

        int iRet = obj.Maximum(iRow, iCol);
        System.out.println("The largest element is : " + iRet);

        sobj.close();
    }
}