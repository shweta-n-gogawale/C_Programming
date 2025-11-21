#include <stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iSumF = 0;
    int iSumNF = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumF = iSumF + i;
        }
        else
        {
            iSumNF = iSumNF + i;
        }
    }

    return iSumF - iSumNF;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
