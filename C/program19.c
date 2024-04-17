#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //Filter for negative input
    {
        printf("Error, Invalid Input");
        printf("Please enter the positive number");
        return;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}