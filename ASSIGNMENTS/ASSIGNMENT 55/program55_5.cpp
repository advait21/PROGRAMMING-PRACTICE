//write a recursive program which acceptnumber from user and return smallest digit

// Input  :     87983
// Output :     3

#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iRev = (iRev * 10) + iDigit;

        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Reverse(iValue);

    cout<<"The reversed number is : "<<iRet;

    return 0;
}