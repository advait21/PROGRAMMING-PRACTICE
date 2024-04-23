// Display the factorial of a number accepted from user

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG CalculateFactorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);

    printf("Factorial of %d is: %d",iValue, iRet);

    return 0;
}