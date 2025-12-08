/*
    Function Name   : Pattern
    Description     : Accept number of rows and columns from user and 
                      display the following pattern where each row contains
                      repeated row numbers.

                      Input  : iRow = 4,  iCol = 4
                      Output :
                                1   1   1   1
                                2   2   2   2
                                3   3   3   3
                                4   4   4   4

    Input           : Integer iRow, Integer iCol
    Output          : Pattern
    Author          : Shweta Gogawale
    Date            : 2025-12-07
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);   // Print row number
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
