//display a number taken from user into single digits
//tell the sum of the digits in the number

#include<stdio.h>

int CountDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
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