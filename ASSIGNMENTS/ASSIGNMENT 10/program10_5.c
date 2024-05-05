// Accept n numbers from user and check whether number 11 is present and return frequncy


#include<stdio.h>       
#include<stdlib.h>  

int Frequency(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()              
{
    int iSize = 0;      
    int *p = NULL;    
    int iCnt = 0;       
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter number you wnat to search: \n");
    scanf("%d", &iValue);

    iRet = Frequency(p, iSize , iValue);

    printf("Frequency of %d is %d",iValue, iRet);

    free(p);

    return 0;               
}