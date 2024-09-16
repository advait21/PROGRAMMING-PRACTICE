//write a java program which accepts marks of N students from user and display class of each student

//Input :  67.3     45.8    
//          
//Output:  67.3     First class
//         45.8     Pass class       

// < 35 Fail
// < 50 Pass class
// < 60 Second class
// < 70 First class
// < 80 First class with distinction

import java.util.Scanner;

class MyArray
{
    public void Percentage(float arr[])
    {
        for(int iCnt = 0; iCnt < arr.length; iCnt++)
        {
            if(arr[iCnt] < 35)
            {
                System.out.println(arr[iCnt] + "\tFail");
            }
            else if((arr[iCnt] >= 35) && (arr[iCnt] < 50))
            {
                System.out.println(arr[iCnt] + "\tPass class");
            }
            else if((arr[iCnt] >= 50) && (arr[iCnt] < 60))
            {
                System.out.println(arr[iCnt] + "\tSecond class");
            }
            else if((arr[iCnt] >= 60) && (arr[iCnt] < 70))
            {
                System.out.println(arr[iCnt] + "\tFirst class");
            }
            else if(arr[iCnt] >= 70)
            {
                System.out.println(arr[iCnt] + "\tFirst class with distinction");
            }
        }
    }
}

class program46_5
{
    public static void main(String Arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        float arr[] = new float[iSize];

        System.out.println("Enter the elements: ");

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            arr[iCnt] = sobj.nextFloat();
        }
        MyArray obj = new MyArray();
        obj.Percentage(arr);

        sobj.close();
    }
}