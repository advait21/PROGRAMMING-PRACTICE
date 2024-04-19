#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= (iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("The factor of number %d is %d \n", iNo, iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}

// Time Complexity : O(N)