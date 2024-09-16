//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :     *   *   *   *   *   *
//              *   *   *   *
//              *   *   *   *   *   *   *   *
//              *   *   *   *   *   *   *

#include<stdio.h>

void Pattern(int iNo)
{
    int iDigit = 0;
        
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        for(int i = 1 ; i <= iDigit ; i++)
        {
            printf("*\t");
        }
        printf("\n"); 

        iNo = iNo / 10;     
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number : ");
    scanf("%d", &iNo);

    Pattern(iNo);

    return 0;
}