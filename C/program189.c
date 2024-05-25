// Copy the string after the end of first string

// 1 : travel till end of dest
// 2 : copy the data from src to dest
// 3 : write '\0' at the end of dest

#include<stdio.h>

void strcatx(char *src, char *dest)     
{
    // 1 : travel till end of dest

    while(*dest != '\0')
    {
        dest++;
    }
    
    // 2 : copy the data from src to dest

    while(*src != 0)
    {
        *dest = *src;
        src++;
        dest++;
    }

    // 3 : write '\0' at the end of dest

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strcatx(Arr,Brr);

    printf("String after copy is : %s\n", Brr);

    return 0;
}