// Accept n numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>       
#include<stdlib.h>      

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
        else
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
    }
    return (iSumEven - iSumOdd);
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

    iRet = Difference(p, iSize); 

    printf("Result is : %d", iRet);

    free(p);

    return 0;               
}