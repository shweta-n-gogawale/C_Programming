/*
    Function Name   : DisplayOddPosition
    Description     : Display elements at odd positions
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

void DisplayOddPosition(PNODE Head)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(iPos % 2 != 0)
        {
            printf("%d ", Head->Data);
        }
        iPos++;
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,101);

    DisplayOddPosition(First);

    return 0;
}
