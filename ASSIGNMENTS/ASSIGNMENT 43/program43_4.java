//write a java program which accept two arrays from user and form new array which is combination of contents of 1st and 2nd array

//Input :   2   9   7   5   2   3
//          9   3   5   5

//Output :  2   9   7   5   2   3   9   3   5   5
        
import java.util.*;

class MyArray
{
    public int[] ArrayConcate(int arr1[], int iSize1, int arr2[], int iSize2)
    {
        int arr3[] = new int[(iSize1 + iSize2)];

        System.out.println("Concatenated array: ");
        for(int iCnt = 0; iCnt < iSize1; iCnt++)
        {
          arr3[iCnt] = arr1[iCnt];
        }

        for(int iCnt1 = iSize1 , iCnt = 0; iCnt1 < (iSize1 + iSize2); iCnt1++, iCnt++)
        {
         arr3[iCnt1] = arr2[iCnt];
        }
        return arr3;
    }
}

class program43_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of 1st array: ");
        int iSize1 = sobj.nextInt();
        
        int iCnt = 0;

        int arr1[] = new int[iSize1];
        System.out.println("Enter elements of 1st array: ");
       
        for(iCnt = 0; iCnt < iSize1; iCnt++)
        {
          arr1[iCnt] = sobj.nextInt(); 
        }

        System.out.println("Enter size of 2st array: ");
        int iSize2 = sobj.nextInt();

        int arr2[] = new int[iSize2];
        System.out.println("Enter elements of 2st array: ");
       
        for(iCnt = 0; iCnt < iSize2; iCnt++)
        {
          arr2[iCnt] = sobj.nextInt(); 
        }

        int arr3[] = new int[(iSize1 + iSize2)];
        MyArray obj = new MyArray();

        arr3 = obj.ArrayConcate(arr1, iSize1, arr2 , iSize2);

        for(iCnt = 0; iCnt < (iSize1 + iSize2); iCnt++)
        {
            System.out.print(arr3[iCnt] + " ");
        }
        sobj.close();

    }
}