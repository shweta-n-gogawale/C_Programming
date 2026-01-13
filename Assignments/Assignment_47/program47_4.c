/*
    Function Name   : DisplayPrime
    Description     : Display prime numbers from linked list
    Author          : Shweta Gogawale
    Date            : 12-01-2026
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->Next = *Head;
    *Head = newn;
}

void DisplayPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0, iFlag = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iFlag = 1;

        if(iNo < 2)
            iFlag = 0;

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFlag = 0;
                break;
            }
        }

        if(iFlag == 1)
        {
            printf("%d ", iNo);
        }

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,17);
    InsertFirst(&First,28);

    DisplayPrime(First);

    return 0;
}
