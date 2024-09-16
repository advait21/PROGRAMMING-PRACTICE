//accept number and check if the 4th and 9th bit are on or not

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000108; 
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else{
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
        cout<<"4th and 9th bit is ON"<<endl;
    }
    else{
        cout<<"4th and 9th bit is OFF"<<endl;
    }

    return 0;
}

