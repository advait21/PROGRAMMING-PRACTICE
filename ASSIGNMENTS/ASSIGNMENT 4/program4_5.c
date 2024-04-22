// Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

#define FALSE 0

float Percentage(float iNo1, float iNo2)
{
    if(iNo2 == 0)
    {
        return FALSE;
    }

    float iResult = 0.0;

    iResult = (iNo1 / iNo2) * 100;

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : \n");
    scanf("%d", &iValue2);

    printf("Please enter obtained marks : \n");
    scanf("%d", &iValue1);

    fRet = Percentage(iValue1, iValue2);

    if(fRet == FALSE)
    {
        printf("Please enter correct values\n");
    }
    else
    {
        printf("Percentage is : %f", fRet);
    }

    return 0;
}