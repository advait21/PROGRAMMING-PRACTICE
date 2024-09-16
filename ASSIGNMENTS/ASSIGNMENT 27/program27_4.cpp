// Check if the 7th bit is ON then turn it OFF and if it is OFF keep it as it is

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000240;

    return (iMask ^ iNo);
  
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = ToggleBit(iValue);
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
