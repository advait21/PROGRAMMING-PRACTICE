//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :   7     6      5      4       3       2       1
//            8     7      6      5       4       3       2       1
//            4     3      2      1
//            6     5      4      3       2       1

#include<stdio.h>

void Pattern(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iNo = iNo / 10;
        Pattern(iNo);

        for(int i = iDigit ; i > 0 ; i--)
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