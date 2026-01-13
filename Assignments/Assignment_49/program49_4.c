/*
    Function Name   : CountDivByFive
    Description     : Count elements divisible by 5
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

int CountDivByFive(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->Data % 5 == 0)
            iCnt++;

        Head = Head->Next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,25);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    InsertFirst(&First,5);

    iRet = CountDivByFive(First);
    printf("%d\n", iRet);

    return 0;
}
