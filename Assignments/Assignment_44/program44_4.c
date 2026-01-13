/*
    Function Name   : Frequency
    Description     : Count frequency of given element
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

int Frequency(PNODE Head, int No)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            iCnt++;
        }
        Head = Head->Next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,11);

    iRet = Frequency(First,11);
    printf("%d\n",iRet);

    return 0;
}
