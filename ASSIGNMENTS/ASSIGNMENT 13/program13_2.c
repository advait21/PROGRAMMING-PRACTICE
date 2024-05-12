// 2. Design application for income tax department to calculate tax amount. According to the income tax department there is no income tax for the income less than 5 lakhs. If income is in between 5 to 10 lakhs then there will be 10% tax. If income is in between 10 to 20 lakhs then there will be 20% tax. And for more than 20 lakhs there will be 30% tax. We have to accept gross income from user and return the tax amount.

// Input: 600000

// Output: 10000

// (0+10000)

// Input: 450000

// Output: 0

// Input: 1200000

// Output: 90000

// (0 + 50000 + 40000)

// Input: 8200000

// Output: 2110000

// (0 + 50000 + 200000+ 1860000)

// Function prototype :

// float IncomeTax(int iAmount)

// {

// // Logic

// }

#include<stdio.h>
#include<stdlib.h>

float IncomeTax(int iAmount)
{
    // Filter
    if(iAmount < 0)
    {
        printf("Invalid input");
        return -1;
    }

    if(iAmount < 500000)
    {
        return 0;
    }

    else if((iAmount >= 500000) && (iAmount < 1000000))
    {
        return ((iAmount - 500000) * 0.1);
    }

    else if((iAmount >= 1000000) && (iAmount < 2000000))
    {
        return (((iAmount - 1000000) * 0.2) + 50000);
    }

    else
    {
        return (((iAmount - 2000000) * 0.3) + 50000 + 200000);
    }
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter gross income : \n");
    scanf("%d", &iValue);

    fRet = IncomeTax(iValue);

    printf("Net payable Income Tax is : %.2f", fRet);

    return 0;
}