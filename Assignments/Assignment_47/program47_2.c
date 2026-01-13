/*
    Function Name   : CountDigits
    Description     : Count digits of each node value
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

void CountDigits(PNODE Head)
{
    int iNo = 0, iCnt = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iCnt = 0;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }

        printf("%d -> %d digits\n", Head->Data, iCnt);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,123);
    InsertFirst(&First,4567);

    CountDigits(First);

    return 0;
}
