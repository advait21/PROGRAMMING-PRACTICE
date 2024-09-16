//write a recursive program which displays below pattern

// Output :     1   2   3   4   5

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<i<<"\t";
        i++;
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