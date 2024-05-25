// Copy contents from one string to another

#include<stdio.h>

void strncpyX(char *src, char *dest, int iLength)     // It is actually an in built function but we are defining it
{
    while((*src != 0) && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;        
        iLength--;        
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the number of characters that you want to copy\n");
    scanf("%d", &iNo);

    strncpyX(Arr,Brr,iNo);

    printf("String after copy is : %s\n", Brr);

    return 0;
}