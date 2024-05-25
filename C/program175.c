// Determine the number of capital and small characters in the string

#include<stdio.h>

void Frequency(char *str)
{
    int iCntCapital = 0;
    int iCntSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCapital++;
        }
        str++;
    }
    printf("The number of capital characters in the string is : %d", iCntCapital);
    printf("The number of small characters in the string is : %d", iCntSmall);

}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    Frequency(Arr);

    return 0;
}