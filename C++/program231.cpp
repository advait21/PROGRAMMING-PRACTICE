// Check if the third bit is 1 or not

#include<iostream>

using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 4;
    int iResult = 0;

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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Third bit is ON"<<"\n";
    }

    else
    {
        cout<<"Third bit is OFF"<<"\n";
    }

    return 0;
}



/*

    No :        13
    
    Binary :    0   0   0   0   1   |1|   0   1

    Mask   :    0   0   0   0   0   |1|   0   0

    -----------------------------------------------
    &           0   0   0   0   0   |1|    0   0       

*/