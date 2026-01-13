/*
    Function Name   : FirstOccur
    Description     : Return position of first occurrence
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

int FirstOccur(PNODE Head, int No)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return iPos;
        }
        iPos++;
        Head = Head->Next;
    }
    return -1;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,51);

    iRet = FirstOccur(First,11);
    printf("%d\n",iRet);

    return 0;
}
