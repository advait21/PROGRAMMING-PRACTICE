//accept number from user and on its first 4 bits and then return the number.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0X0000000F;
    int iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = OnBit(iValue);
    cout<<"Result is: "<<iRet;

    return 0;
}

//49                    15
//00110001              00001111
//00001111 |            0000
//----------
//