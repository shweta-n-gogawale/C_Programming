#include <stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int evenFact = 1;
    int oddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            evenFact = evenFact * i;
        }
        else
        {
            oddFact = oddFact * i;
        }
    }

    return evenFact - oddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
