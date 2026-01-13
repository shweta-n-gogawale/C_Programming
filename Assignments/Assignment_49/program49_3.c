/*
    Function Name   : DisplayDivByThree
    Description     : Display elements divisible by 3
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

void DisplayDivByThree(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data % 3 == 0)
            printf("%d ", Head->Data);

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,30);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,9);

    DisplayDivByThree(First);

    return 0;
}
