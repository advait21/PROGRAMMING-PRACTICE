// Write a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iResult = 0;
    int iSumFactors = 0;
    int iSumNonFactors = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFactors = iSumFactors + iCnt;
        }
        else
        {
            iSumNonFactors = iSumNonFactors + iCnt;
        }     
    }
    iResult = iSumFactors - iSumNonFactors;
    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}