// Write a program which accept number from user and return summation of all its non factors.

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iResult = iResult + iCnt;
        }
    }
    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}