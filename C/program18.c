#include<stdio.h>


void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5 ; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iValue);

    Display();
    
    return 0;
}