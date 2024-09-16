//write a recursive program which acceptnumber from user and return summation of its digits

// Input  :     879
// Output :     24

#include<iostream>
using namespace std;

int Sum(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<"The summation of digits is : "<<iRet;

    return 0;
}