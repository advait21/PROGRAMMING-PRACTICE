//display a number taken from user into single digits
//count the digits in the number

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CountDigits(iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d\n", iRet);

    return 0;
}