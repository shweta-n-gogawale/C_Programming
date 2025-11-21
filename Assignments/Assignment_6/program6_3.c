/* Program 3: Check equality of two numbers */
#include <stdio.h>
#include <stdbool.h>

bool ChkEqual(int a, int b)
{
    return (a == b);
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers: ");
    if (scanf("%d %d", &iValue1, &iValue2) != 2) return 0;

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}
