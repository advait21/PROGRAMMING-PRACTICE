// 1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer. If bill bill amount is less than 500 then there is no discount, if bill amount is less than 1500 and more than 500 they give 10% discount. Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

// And if the bill amount is more than 1500 then they give 15% discount.

// Input: 1200

// Output: 1080

// Input: 290

// Output: 290

// Input: 3700

// Output: 3145

// Function prototype :

// float CalculateBill (int iAmount)

// {

// // Logic

// }


#include<stdio.h>
#include<stdlib.h>

float CalculateBill(int iAmount)
{
    // Filter
    if(iAmount < 0)
    {
        printf("Invalid input");
        return -1;
    }

    if(iAmount < 500)
    {
        return iAmount;
    }

    else if((iAmount >= 500) && (iAmount < 1500))
    {
        return (iAmount - (iAmount * 0.1));
    }

    else
    {
        return (iAmount - (iAmount * 0.15));
    }
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter the total bill amount : \n");
    scanf("%d", &iValue);

    fRet = CalculateBill(iValue);

    printf("Net payable amount is : %.2f", fRet);

    return 0;
}