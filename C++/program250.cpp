// accept number from user and OFF 7th bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

//  1111    1111    1111    1111    1111    1111    1011    1111
//  F       F       F       F       F       F       B       F

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0XFFFFFFBF;
    UINT iResult = 0;

    return iNo & iMask1;
    
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;

    iRet = OffBit(iValue1);
    cout<<"Result is: "<<iRet<<endl;
    

    return 0;
}

/*

    iPos = 7
    iNo = 56

    iNo         0       |0|       1       1       1       0       0       0
    iMask       1       |0|       1       1       1       1       1       1
    &
___________________________
    iResult     0       |0|       1       1       1       0       0       0

    iPos = 7
    iNo = 120

    iNo         0       |1|       1       1       1       0       0       0
    iMask       1       |0|       1       1       1       1       1       1
    &
___________________________
    iResult     0       |0|       1       1       1       0       0       0

*/