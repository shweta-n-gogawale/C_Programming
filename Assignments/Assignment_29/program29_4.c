/*
    Function Name   : Pattern
    Description     : Print positive/negative alternating rows.
    Input           : Integer iRow, Integer iCol
    Output          : Pattern
    Author          : Shweta Gogawale
    Date            : 2025-11-24
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int sign = (i % 2 == 1) ? 1 : -1;

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", sign * j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
