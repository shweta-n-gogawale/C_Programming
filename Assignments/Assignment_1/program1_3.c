// /////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Prints numbers from 5 to 1.
// Input         : None
// Output        : None
// Author        : Shweta Gogawale
// Date          : 20/11/2025
// Time Complexity : O(1)
// /////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 5;
    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}
