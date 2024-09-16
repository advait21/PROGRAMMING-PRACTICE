//accept number and check if the third bit is on or not

#include<iostream>
using namespace std;


bool CheckBit(int iNo)
{
    unsigned int iMask = 4;
    unsigned int iResult = 0;

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
    unsigned int iValue = 0;
    bool bRet = false;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"3rd bit is ON"<<endl;
    }
    else{
        cout<<"3rd bit is OFF"<<endl;
    }

    return 0;
}

/*
    No:     13
                                     
    Binary :    0   0   0   0   1   |1|   0   1
    Mask   :    0   0   0   0   0   |1|    0   0
    &
----------------------------------------------------
                0   0   0   0   0    1    0   0

*/
