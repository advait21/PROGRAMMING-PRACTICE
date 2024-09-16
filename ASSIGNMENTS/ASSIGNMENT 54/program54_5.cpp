//write a recursive program which acceptnumber from user and return its product of digits

// Input  :     523
// Output :     30

#include<iostream>
using namespace std;

int Mult(int iNo)
{
    int iDigit = 0;
    static int iProd = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Mult(iValue);

    cout<<"The product of digits is : "<<iRet;

    return 0;
}