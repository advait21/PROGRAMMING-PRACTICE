//write a recursive program which acceptnumber from user and return smallest digit

// Input  :     87983
// Output :     3

#include<iostream>
using namespace std;

int Min(int iNo)
{
    int iDigit = 0;
    static int iMin = iNo % 10;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Min(iValue);

    cout<<"The smallest digit is : "<<iRet;

    return 0;
}