//Display the factors of the number given as input except for that number itself
//program 21 to program 24

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}