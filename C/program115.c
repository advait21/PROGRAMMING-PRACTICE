// Pattern printing non linear
/*
    input:
        row: 3
        column: 5

    output:
        1   2   3   4   5
        1   2   3   4   5   
        1   2   3   4   5
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t", jCnt);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

     printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);


    return 0;
}