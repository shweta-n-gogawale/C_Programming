/*
    Function Name   : DisplayReverse
    Description     : Display linked list in reverse order
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

void DisplayReverse(PNODE Head)
{
    if(Head == NULL)
        return;

    DisplayReverse(Head->Next);
    printf("%d ", Head->Data);
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,101);

    DisplayReverse(First);

    return 0;
}
