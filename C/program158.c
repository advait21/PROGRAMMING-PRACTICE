//accept name from user and print this whole name

#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter your name : \n");
    scanf("%[^'\n']s", Arr);

    printf("Your name is : %s\n", Arr);

    return 0;
}