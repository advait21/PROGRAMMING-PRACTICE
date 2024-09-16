// Write a program to accept string from user and display it in reverse order

// Input : "MarvellouS"
// Output : "SuollevraM"

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 1;

    while(*str != 0)
    {       
        iCnt++;
        str++;
    }

    while(iCnt != 0)
    {
        printf("%c", *str);
        iCnt--;
        str--;
    }
}


int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}