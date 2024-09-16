//write a recursive program which accept string from user and return the number of small characters

// Input  :     HelLo WoRLd
// Output :     5

#include<iostream>
using namespace std;

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout<<"Enter string: \n";
    cin.getline(arr , 20);

    iRet = Small(arr);

    cout<<"The number of White spaces is : "<<iRet;

    return 0;
}