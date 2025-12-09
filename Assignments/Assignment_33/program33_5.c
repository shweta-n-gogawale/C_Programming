/*
    Function Name   : DisplaySchedule
    Description     : Accept division from user and display exam timing 
                      according to division letters A, B, C, or D.
                      Division check should be case-insensitive.

                      A / a → "Your exam is at 7 AM"
                      B / b → "Your exam is at 8:30 AM"
                      C / c → "Your exam is at 9:20 AM"
                      D / d → "Your exam is at 10:30 AM"

    Input           : Character Division
    Output          : Exam Timing (String)
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    // Convert to uppercase for case-insensitive comparison
    if(chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam is at 7 AM\n");
            break;

        case 'B':
            printf("Your exam is at 8:30 AM\n");
            break;

        case 'C':
            printf("Your exam is at 9:20 AM\n");
            break;

        case 'D':
            printf("Your exam is at 10:30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
