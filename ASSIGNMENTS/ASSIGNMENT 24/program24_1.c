// accept string from user and check whether the character is present or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CountChar(char *str , char cValue)
{
    int iCount = 0;
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            bFlag = TRUE;   
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: \n");
    scanf(" %c", &cValue); 

    bRet = CountChar(Arr , cValue);

    if(bRet == TRUE)
    {
        printf("%c is present in the string %s ",cValue , Arr);
    }
    else{
        printf("%c is not present in the string %s",cValue , Arr);
    }

    return 0;
}