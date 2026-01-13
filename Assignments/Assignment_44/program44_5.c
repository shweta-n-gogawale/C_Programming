/*
    Function Name   : DisplayEven
    Description     : Display only even elements from linked list
    Author          : Shweta Gogawale
    Date            : 10-01-2026
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

void DisplayEven(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            printf("%d ",Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,20);
    InsertFirst(&First,21);

    DisplayEven(First);

    return 0;
}
