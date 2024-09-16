//write a recursive program which accept string from user and return the number of characters

// Input  :     Hello
// Output :     5

#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout<<"Enter string: \n";
    cin>>arr;

    iRet = Strlen(arr);

    cout<<"The number of characters is : "<<iRet;

    return 0;
}