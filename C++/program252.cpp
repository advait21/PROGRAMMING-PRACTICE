// Check if the bit entered by user is ON then turn it OFF and if it is OFF keep it as it is

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<endl;
        return false;
    }

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask;

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

    iRet = OffBit(iValue, iBit);
    cout<<"Result is : "<<iRet<<endl;

    return 0;
}


/*

    iNo = 120
    iNo         0   1   1   1   1   0   0   0

    iPos = 7

    iMask = 0x00000001
    iMask       0   0   0   0   0   0   0   1

    iMask = iMask << (iPos - 1);
    iMask = iMask << (7 - 1);
    iMask = iMask << 6;

    iMask       0   |1|   0   0   0   0   0   0   

    iMask = ~iMask;
    iMask       1   |0|   1   1   1   1   1   1

    iResult = iNo & iMask

    iNo         0   |1|   1   1   1   0   0   0
    iMask       1   |0|   1   1   1   1   1   1       &
    ----------------------------------------------------
    iResult     0   |0|   1   1   1   0   0   0

*/
