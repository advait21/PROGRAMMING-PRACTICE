// 3. Design application for school management system. As school is primary there are 4 standards from 1 to 4.

// School fees of each standard is different.

// For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450.

// We have to accept standard from user and display the corresponding fees.

// Input: 2

// Output: 12790

// Input: 4

// Output: 23450

// Input: 6

// Output: Wrong input

// Function prototype :

// int SchoolFees(int iStandard)

// {

//  //Logic

//  }


#include<stdio.h>
#include<stdlib.h>

int SchoolFees(int iStandard)
{
    // Filter
    if((iStandard < 0) && (iStandard > 4))
    {
        printf("Invalid input\n Enter standard between 1 to 4");
        return -1;
    }

    if(iStandard == 1)
    {
        return 8900;
    }

    else if(iStandard == 2)
    {
        return 12790;
    }

    else if(iStandard == 3)
    {
        return 21000;
    }

    else if(iStandard == 4)
    {
        return 23450;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the standard of the student: \n");
    scanf("%d", &iValue);

    iRet = SchoolFees(iValue);

    printf("Net payable Fees for standard %d is : %d", iValue, iRet);

    return 0;
}