//accept n numbers and return the addition of digits

#include<stdio.h>       
#include<stdlib.h>  

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigits = 0;
    

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        int iCopy = Arr[iCnt];
        int iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iDigits = Arr[iCnt] % 10;
            iSum = iSum + iDigits;
            Arr[iCnt] = Arr[iCnt] / 10;
           
        } 
    printf("Sum is: %d\n", iSum);      
    }
}

int main()              
{
    int iSize = 0;      
    int *p = NULL;    
    int iCnt = 0;   
        
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

    DigitsSum(p, iSize);
    
    free(p);

    return 0;               
}