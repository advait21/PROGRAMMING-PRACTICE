// Convert every small letter to capital in the string
// We are subtracting 32 in this case as the difference between the ASCII values of capital and small characters is 32

#include<stdio.h>

void struprX(char *str)     // It is actually an in built function but we are defining it
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    struprX(Arr);

    printf("String after editing is : %s\n", Arr);

    return 0;
}