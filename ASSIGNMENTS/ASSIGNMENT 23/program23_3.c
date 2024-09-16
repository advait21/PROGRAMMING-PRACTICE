// Accept string from user and ctoggle the case.

// Input: "Marvellous Multi OS"
// Output: mARVELLOUS mULTI os

#include<stdio.h>

void strtoggleX(char *str)
{
    int gap = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            printf("%c" , (*str - gap));
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            printf("%c" , (*str + gap));
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

    strtoggleX(Arr);

    return 0;
}