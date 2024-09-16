// Write a program that checks whether 1st and 32nd bit is ON or OFF

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001; 
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"1st and 32nd Bit is ON"<<endl;
    }
    else
    {
        cout<<"1st and 32nd Bit is OFF"<<endl;
    }

    return 0;
}
