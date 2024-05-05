// Accept n numbers from user and return frequency of even numbers

#include<stdio.h>       
#include<stdlib.h>      

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCount = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCount++;
        }
    }
    return (iEvenCount);
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

    iRet = CountEven(p, iSize); 

    printf("Result is : %d", iRet);

    free(p);

    return 0;               
}