// Copy only the number of characters as entered by user of a string after the end of first string


#include<stdio.h>

void strncatx(char *src, char *dest, int iLength)    //Inbuilt   
{
    // 1 : travel till end of dest

    while(*dest != '\0')
    {
        dest++;
    }
    
    // 2 : copy the data from src to dest

    while((*src != 0) && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        
        iLength--;        
    }

    // 3 : write '\0' at the end of dest

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the number of letters that you want to concat\n");
    scanf("%d", &iNo);

    strncatx(Arr,Brr,iNo);

    printf("String after concatenation is : %s\n", Brr);

    return 0;
}