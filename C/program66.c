// Find avg of digits

#include<stdio.h>

float DigitsAverage(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int iSum = 0;
    float iAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt++;
        iNo = iNo / 10;
    }
    
    iAvg = (float)iSum / (float)iCnt;
    return iAvg;
    //return ((float)iSum / (float)iCount)     Do this if you dont want to create iAvg variable
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    fRet = DigitsAverage(iValue);

    printf("Average of Digits is %f \n", fRet);
    
    return 0;
}