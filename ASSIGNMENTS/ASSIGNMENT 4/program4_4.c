//Accept 3 numbers and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;
    if(iNo1 == 0)
    {
        iAns = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iAns = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iAns = iNo1 * iNo2;
    }
    else if((iNo1 == 0) && (iNo2 == 0))
    {
        iAns = iNo3;
    }
    else if((iNo1 && iNo3) == 0)
    {
        iAns = iNo2;
    }
    else if((iNo2 && iNo3) == 0)
    {
        iAns = iNo1;
    }
    else
    {
        iAns = iNo1 * iNo2 * iNo3;
    }

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0 , iRet = 0;
    printf("Enter numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d", iRet);

    return 0;
}