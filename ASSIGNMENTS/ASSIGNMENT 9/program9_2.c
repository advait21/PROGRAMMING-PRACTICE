// Accept n numbers from user and display all such elements which are divisible by 5.

#include<stdio.h>       
#include<stdlib.h>      

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()              
{
    int iSize = 0;      
    int *p = NULL;    
    int iCnt = 0;       
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;               
}