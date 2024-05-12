// Accept n numbers from user and accept one another number as NO, return index of first occurance of NO.

#include<stdio.h>       
#include<stdlib.h>  

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = -1;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iCount = iCnt;
            break;
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

    printf("Enter the number : ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter %d element : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = FirstOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurance of number is %d", iRet);
    }

    free(p);

    return 0;               
}