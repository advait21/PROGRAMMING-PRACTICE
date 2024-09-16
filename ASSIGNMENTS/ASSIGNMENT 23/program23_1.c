// Accept string from user and convert it into lower case.

// Input: "Marvellous Multi OS"
// Output: marvellous multi os

#include<stdio.h>

void strlwrX(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            printf("%c" , (*str + 32));
        }
        else
        {
            printf("%c" ,*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    strlwrX(Arr);

    return 0;
}