// Display the factorial of a number accepted from user

#include<stdio.h>

int CalculateFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);

    printf("Factorial of %d is: %d",iValue, iRet);

    return 0;
}