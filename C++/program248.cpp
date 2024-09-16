// Check if the bit entered by user is ON then turn it OFF and if it is OFF keep it as it is

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<endl;
        return false;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iBit = 0;
    UINT iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    cout<<"Enter the bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit;

    iRet = ToggleBit(iValue, iBit);
    cout<<"Result is : "<<iRet<<endl;

    return 0;
}


/*

0000    0000    0000    0000    0000    0000    0000    0000

iPos = 7

iMask = 0X00000001

iMask = 0000    0000    0000    0000    0000    0000    0000    0001

iMask = iMask << (iPos - 1);
iMask = iMask << (7 - 1);
iMask = iMask << 6;

iMask = 0000    0000    0000    0000    0000    0000    0   0   0   0   0   0   0   1   (Initial) 

iMask = 0000    0000    0000    0000    0000    0000    0   1   0   0   0   0   0   0   (After shifting) 

*/
