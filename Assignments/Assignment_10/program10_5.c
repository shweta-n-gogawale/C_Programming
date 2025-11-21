//TC: O(1)
#include<stdio.h>

double SquareMeter(int iValue)
{
    // Logic
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n",dRet);

    return 0;
}
