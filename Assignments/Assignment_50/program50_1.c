/*
    Function Name   : MakeAbsolute
    Description     : Replace negative numbers with absolute value
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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

void MakeAbsolute(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->Data < 0)
            temp->Data = -temp->Data;

        temp = temp->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,-11);
    InsertFirst(&First,21);
    InsertFirst(&First,-51);
    InsertFirst(&First,101);

    MakeAbsolute(&First);

    while(First != NULL)
    {
        printf("%d ", First->Data);
        First = First->Next;
    }

    return 0;
}
