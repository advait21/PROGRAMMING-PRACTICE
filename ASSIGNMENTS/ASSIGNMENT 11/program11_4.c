// Accept N numbers from user and accept range, display all elements from that range

#include<stdio.h>       
#include<stdlib.h>  

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = 0 ; iCnt <= iLength ; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }

}

int main()              
{
    int iSize = 0;      
    int *p = NULL;    
    int iCnt = 0;       
    int iRet = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the starting point : ");
    scanf("%d", &iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;               
}