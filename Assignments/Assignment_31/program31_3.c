/*
    Function Name   : Pattern
    Description     : Accept number of rows and columns from user and 
                      display the following pattern where:
                      - Elements below diagonal = '#'
                      - Elements on diagonal   = '$'
                      - Elements above diagonal = '*'

                      Input  : iRow = 5,  iCol = 5
                      Output :
                                $   *   *   *   *
                                #   $   *   *   *
                                #   #   $   *   *
                                #   #   #   $   *
                                #   #   #   #   $

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
            if(i == j)               // Diagonal
            {
                printf("$\t");
            }
            else if(i > j)           // Below diagonal
            {
                printf("#\t");
            }
            else                     // Above diagonal
            {
                printf("*\t");
            }
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
