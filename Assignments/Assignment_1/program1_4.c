// /////////////////////////////////////////////////////////////////
// Function Name : Check
// Description   : Checks if a number is divisible by 5.
// Input         : int
// Output        : bool
// Author        : Shweta Gogawale
// Date          : 20/11/2025
// Time Complexity : O(1)
// /////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}
