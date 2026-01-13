/*
    Function Name   : Search
    Description     : Check whether number is present in linked list
    Author          : Shweta Gogawale
    Date            : 10-01-2026
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

BOOL Search(PNODE Head, int No)
{
    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return TRUE;
        }
        Head = Head->Next;
    }
    return FALSE;
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    bRet = Search(First,21);

    if(bRet == TRUE)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");

    return 0;
}
