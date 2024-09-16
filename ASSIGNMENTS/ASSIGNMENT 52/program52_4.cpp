//write a recursive program which displays below pattern

// Output :     A   B   C   D   E

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static char ch = 'A';

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