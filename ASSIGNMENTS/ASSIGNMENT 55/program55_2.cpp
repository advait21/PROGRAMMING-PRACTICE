//write a recursive program which acceptnumber from user and return largest digit

// Input  :     87983
// Output :     9

#include<iostream>
using namespace std;

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = iNo % 10;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Max(iValue);

    cout<<"The largest digit is : "<<iRet;

    return 0;
}