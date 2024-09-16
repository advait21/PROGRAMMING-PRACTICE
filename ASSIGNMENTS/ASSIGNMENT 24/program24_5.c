// reverse the string 

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 1;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    
    while(iCnt != 0)
    {
        
        printf("%c" , *str);
        iCnt--;
        str--;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
   

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}