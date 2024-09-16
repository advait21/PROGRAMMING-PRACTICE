// Check if the 7th and 10th bit is ON then turn it OFF and if it is OFF keep it as it is

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)    // Bit is ON
    {
        return (iMask ^ iNo);
    }

    else    //  Bit is OFF
    {
        return iNo;
    }    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is : "<<iRet<<endl;

    return 0;
}
