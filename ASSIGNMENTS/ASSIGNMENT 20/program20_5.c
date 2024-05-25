// Accept division of students from user aand depends on the division display exam timing.There are 4 divisions in school as A,B,C,D.
// Exam of division A is at 7AM , B at 8.30AM, C at 9.20AM, D at 10.30Am.
// (Application should be case insensitive)

// Input: C
// Output:   Your exm is at 9.20AM

// Input : d
// Output: Your exam is at 10.30AM

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'a') || (chDiv == 'A'))
    {
        printf("Your exam is a 7 AM");
        return;
    }

    else if((chDiv == 'b') || (chDiv == 'B'))
    {
        printf("Your exam is a 8.30 AM");
        return;
    }

    else if((chDiv == 'c') || (chDiv == 'C'))
    {
        printf("Your exam is a 9.20 AM");
        return;
    }

    else if((chDiv == 'd') || (chDiv == 'D'))
    {
        printf("Your exam is a 10.30 AM");
        return;
    }

    else
    {
        printf("Wrong input");
        return;
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}