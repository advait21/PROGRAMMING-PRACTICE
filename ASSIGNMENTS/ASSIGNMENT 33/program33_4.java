// Write a java program which accepts string from user and checks wheather it contains vowels or not

import java.util.Scanner;

class StringDemo
{
    public boolean ChkVowel(String str)
    {
        char Arr[] = str.toCharArray();
        boolean bFlag = false;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U'))
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}

class program33_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name = sobj.nextLine();

        StringDemo obj = new StringDemo();
        
        boolean bRet = obj.ChkVowel(name);
        
        if(bRet == false)
        {
            System.out.println("Vowel not found");
        }
        else
        {
            System.out.println("Vowel found");
        }

        sobj.close();
    }
}