/*
    Function Name   : DigitsSum
    Description     : Display summation of digits of each number
    Input           : Integer array, Integer iLength
    Output          : Summation of digits of each number
    Author          : Shweta Gogawale
    Date            : 2025-11-24
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0, iNo = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }

        printf("%d  ", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}
