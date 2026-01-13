/*
    Function Name   : DisplayGreater
    Description     : Display elements greater than given X
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

void DisplayGreater(PNODE Head, int X)
{
    while(Head != NULL)
    {
        if(Head->Data > X)
        {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,41);
    InsertFirst(&First,6);

    DisplayGreater(First,20);

    return 0;
}
