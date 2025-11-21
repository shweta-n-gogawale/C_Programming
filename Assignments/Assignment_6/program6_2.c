/* Program 2: Check greater than 100 */
#include <stdio.h>
#include <stdbool.h>

bool ChkGreater(int number)
{
    return (number > 100);
}

int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number: ");
    if (scanf("%d", &iValue) != 1) return 0;

    bRet = ChkGreater(iValue);

    if (bRet)
        printf("Greater\n");
    else
        printf("Smaller\n");

    return 0;
}
