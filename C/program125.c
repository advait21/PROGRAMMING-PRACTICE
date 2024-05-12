// Pattern printing non linear
/*
    input:
        row: 4
        column: 4

    output:
        #   $   $   $   $   $
        $   #   $   $   $   $   
        $   $   #   $   $   $  
        $   $   $   #   $   $
        $   $   $   $   #   $
        $   $   $   $   $   # 
*/

// If a pattern contains a diagonal in it then the number of rows and columns should be same.
// If the user enters different number of rows and columns then we can add the /filter/ in our display function.

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1 ; jCnt <= iCol; jCnt++)
        {
            if(iCnt == jCnt)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }         
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