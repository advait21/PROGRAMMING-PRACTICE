// Count number of character entered by user in the string 
// Faulty program
// Solution in next program

#include<stdio.h>

int CountChar(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character : \n");
    scanf("%c", &ch);

    iRet = CountChar(Arr, ch);

    printf("Number of occurances of %d are : %d\n", ch, iRet);

    return 0;
}