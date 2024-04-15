#include "program5Header.h"

/////////////////////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first Number : \n");
    scanf("%d", &iNo1);

    printf("Enter second Number : \n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is : %d", iAns);

}