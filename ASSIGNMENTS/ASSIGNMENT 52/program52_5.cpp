//write a recursive program which displays below pattern

// Output :     a   b   c   d   e

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char ch = 'a';

    if(iNo != 0)
    {
        cout<<ch<<"\t";
        ch++;
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The pattern is : \n";

    Display(iValue);

    return 0;
}