// Write a program which accepts the marks and displays the marks accordingly.
// 0 to 34          Fail
// 34 to 49         Pass Class
// 50 to 59         Second Class
// 60 to 74         First Class
// 75 to 100        First Class with Distinction

#include<stdio.h>       // For printf and scanf
#include<stdbool.h>     // For bool data type

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))       // Filter
    {
        printf("Invalid Input\n");
        printf("Please enter the marks in between the range 0 to 100");
        return;
    }
    
    if((fMarks >= 0.0) && (fMarks < 35.00f))
    {
        printf("You are fail\n");
    }

    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You got pass class");
    }    

    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("You got second class");
    }     

    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You got first class");
    } 

    else if((fMarks >= 75.00f) && (fMarks < 100.00f))
    {
        printf("You got First class with Distinction");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage : \n");
    scanf("%f", &fValue);

    DisplayClass(fValue);

    return 0;
}