/* Program 4: Multiply three numbers, skip zeros (unless all are zero) */
#include <stdio.h>
#include <stdbool.h>

int Multiply(int a, int b, int c)
{
    int product = 1;
    bool anyNonZero = false;

    if (a != 0) { product *= a; anyNonZero = true; }
    if (b != 0) { product *= b; anyNonZero = true; }
    if (c != 0) { product *= c; anyNonZero = true; }

    if (!anyNonZero)
        return 0; /* all inputs were zero */
    return product;
}

int main(void)
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    if (scanf("%d %d %d", &iValue1, &iValue2, &iValue3) != 3) return 0;

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);
    return 0;
}
