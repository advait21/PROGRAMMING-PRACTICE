// Accept n numbers from user and check whether number 11 is present

#include<stdio.h>       
#include<stdlib.h>  

#define TRUE 0
#define FALSE 1

typedef int BOOL;
BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bRet = FALSE;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
           bRet = TRUE;
        }
    }
    return bRet;
}

int main()              
{
    int iSize = 0;      
    int *p = NULL;    
    int iCnt = 0;       
    BOOL bRet = FALSE;


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

    bRet = Check(p, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else{
        printf("11 is absent\n");
    } 

    free(p);

    return 0;               
}