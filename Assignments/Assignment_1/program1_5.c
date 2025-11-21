// /////////////////////////////////////////////////////////////////
// Function Name : Accept
// Description   : Prints '*' character n times.
// Input         : int
// Output        : None
// Author        : Shweta Gogawale
// Date          : 20/11/2025
// Time Complexity : O(n)
// /////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    for(int iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 5;

    Accept(iValue);

    return 0;
}
