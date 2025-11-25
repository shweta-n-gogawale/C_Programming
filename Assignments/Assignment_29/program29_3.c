/*
    Function Name   : Pattern
    Description     : Accept rows and columns and print alphabet-number alternating rows.
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
        if(i % 2 == 1)
        {
            char ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            int num = 1;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", num);
                num++;
            }
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
