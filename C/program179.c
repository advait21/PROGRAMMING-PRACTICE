// Convert every capital letter to  small letter in the string
// We are adding 32 in this case as the difference between the ASCII values of capital and small characters is 32

#include<stdio.h>

void strlwrX(char *str)     // It is actually an in built function but we are defining it
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;;
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

    strlwrX(Arr);

    printf("String after editing is : %s\n", Arr);

    return 0;
}