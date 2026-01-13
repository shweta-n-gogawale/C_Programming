/*
    Function Name   : CountTwoDigit
    Description     : Count two digit numbers
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

int CountTwoDigit(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if((Head->Data >= 10 && Head->Data <= 99) ||
           (Head->Data <= -10 && Head->Data >= -99))
        {
            iCnt++;
        }
        Head = Head->Next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,21);
    InsertFirst(&First,9);
    InsertFirst(&First,55);

    iRet = CountTwoDigit(First);
    printf("%d\n", iRet);

    return 0;
}
