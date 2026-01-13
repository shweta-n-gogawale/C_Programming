/*
    Function Name   : DisplayGreaterThanAvg
    Description     : Display elements greater than average
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

void DisplayGreaterThanAvg(PNODE Head)
{
    int iSum = 0, iCnt = 0;
    float fAvg = 0.0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        iSum += temp->Data;
        iCnt++;
        temp = temp->Next;
    }

    fAvg = (float)iSum / iCnt;

    while(Head != NULL)
    {
        if(Head->Data > fAvg)
            printf("%d ", Head->Data);

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    DisplayGreaterThanAvg(First);

    return 0;
}
