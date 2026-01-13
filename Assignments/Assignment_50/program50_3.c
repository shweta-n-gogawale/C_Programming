/*
    Function Name   : CheckSorted
    Description     : Check whether linked list is sorted
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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

BOOL CheckSorted(PNODE Head)
{
    while(Head->Next != NULL)
    {
        if(Head->Data > Head->Next->Data)
            return FALSE;

        Head = Head->Next;
    }
    return TRUE;
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    bRet = CheckSorted(First);

    if(bRet == TRUE)
        printf("List is sorted\n");
    else
        printf("List is not sorted\n");

    return 0;
}
