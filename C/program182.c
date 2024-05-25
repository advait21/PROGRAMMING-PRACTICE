// Convert every small letter to capital letter and vice cersa in the string

#include<stdio.h>

void strtoggleX(char *str)     // It is actually an in built function but we are defining it
{
    int Gap = 'a' - 'A';       // Different yet impactful Approach

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;;
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

    strtoggleX(Arr);

    printf("String after editing is : %s\n", Arr);

    return 0;
}