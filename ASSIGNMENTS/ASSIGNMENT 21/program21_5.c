// Accept character from user and display its value in decimal, hexadecimal and octal format

// Input : A
// Output : Decimal     65
//          Octal       0101
//          Hexadecimal 0X41

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\nOctal\t\t%o\nHexadecimal\t%X\n", ch, ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}