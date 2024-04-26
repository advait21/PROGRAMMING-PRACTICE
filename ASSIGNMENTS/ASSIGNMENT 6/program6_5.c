//print table in reverse order

#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
       printf("%d\t", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Table(iValue);
    return 0;
}