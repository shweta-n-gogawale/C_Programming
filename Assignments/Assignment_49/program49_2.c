/*
    Function Name   : CheckAllPositive
    Description     : Check whether all elements are positive
    Author          : Shweta Gogawale
    Date            : 12-01-2026
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

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

BOOL CheckAllPositive(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data < 0)
            return FALSE;

        Head = Head->Next;
    }
    return TRUE;
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,51);

    bRet = CheckAllPositive(First);

    if(bRet == TRUE)
        printf("All elements are positive\n");
    else
        printf("All elements are not positive\n");

    return 0;
}
