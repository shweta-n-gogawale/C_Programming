/*
    Function Name   : MultiplyByTwo
    Description     : Multiply each element by 2
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

void MultiplyByTwo(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        temp->Data = temp->Data * 2;
        temp = temp->Next;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d ", Head->Data);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);

    MultiplyByTwo(&First);
    Display(First);

    return 0;
}
