// Calculate the power of a number taking both the base and power as an input from the user
// Using typedef
// typedef: use to create user defined data type

#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG CalculatePower(int iBase , int iPower)
{
    int iCnt = 0;
    ULONG iResult = 1; // int iResult = iBase;

    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }

    for(iCnt = 1 ; iCnt <= iPower ; iCnt++)  // for(iCnt = 1 ; iCnt < iPower ; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter base : \n");
    scanf("%d", &iValue1);

    printf("Enter power : \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);

    printf("Result is : %d\n", iRet);

    return 0;
}