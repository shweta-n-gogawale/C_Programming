/*
  Function Name : PrintHelloOrDemo
  Description   : Accept an integer and print "Hello" if it is less than 10, otherwise print "Demo".
  Input         : int N
  Output        : "Hello" or "Demo" printed to stdout
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void PrintHelloOrDemo(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main(void)
{
    int iValue = 7; /* example input */
    printf("Input: %d\nOutput: ", iValue);
    PrintHelloOrDemo(iValue);
    return 0;
}
