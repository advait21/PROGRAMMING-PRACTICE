// Accept string from user and count no of white spaces.

// Input: "Marvellous Multi OS"
// Output: 2

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Number of White spaces is : %d\n", iRet);

    return 0;
}