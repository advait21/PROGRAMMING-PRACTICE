//Accept name from user and print that name

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Enter name: ");
    scanf("%[^\n]s", Name);
    printf("Your name is %s", Name);
    return 0;
}