//write a recursive program which accept number from user and return its factorial

// Input  :     5
// Output :     120

#include<iostream>
using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"The factorial of digit is : "<<iRet;

    return 0;
}