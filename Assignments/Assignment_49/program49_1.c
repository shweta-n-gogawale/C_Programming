/*
    Function Name   : Difference
    Description     : Return difference between maximum and minimum element
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

int Difference(PNODE Head)
{
    int iMax = Head->Data;
    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
            iMax = Head->Data;
        if(Head->Data < iMin)
            iMin = Head->Data;

        Head = Head->Next;
    }
    return (iMax - iMin);
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    iRet = Difference(First);
    printf("%d\n", iRet);

    return 0;
}
