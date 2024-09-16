//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :     1   2   3   4   5   6   7
//              1   2   3   4   5   6   7   8
//              1   2   3   4
//              1   2   3   4   5   6

#include<stdio.h>

void Pattern(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;
        Pattern(iNo);

        for(int i = 1 ; i <= iDigit ; i++)
        {
            printf("%d\t", i);
        }
        printf("\n");          
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