//Accept character from user and check whether it is a small case or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSmall(char ch)
{
    
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: \n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == FALSE)
    {
        printf("It is small case character\n");
    }
    else{
        printf("It is not a small case character\n");
    }

    return 0;
}