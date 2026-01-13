/*
    Function Name   : CountPrime
    Description     : Count prime numbers from linked list
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

int CountPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0, iFlag = 0, iCount = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iFlag = 1;

        if(iNo < 2)
            iFlag = 0;

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFlag = 0;
                break;
            }
        }

        if(iFlag == 1)
        {
            iCount++;
        }

        Head = Head->Next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,17);
    InsertFirst(&First,28);

    iRet = CountPrime(First);
    printf("%d\n", iRet);

    return 0;
}
