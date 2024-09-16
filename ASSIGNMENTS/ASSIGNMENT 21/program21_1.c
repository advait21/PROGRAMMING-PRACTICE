// Write a program which displays ASCII table. Table contains symbol,
// Decimal, Hexadecimal and octal representations of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for (int i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}