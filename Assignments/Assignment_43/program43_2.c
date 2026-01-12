/*
    Function Name   : DisplayPrime
    Description     : Display all prime numbers from linked list
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

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

void DisplayPrime(PNODE Head)
{
    int iNo = 0, iCnt = 0, iFlag = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iFlag = 0;

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFlag = 1;
                break;
            }
        }

        if(iFlag == 0 && iNo > 1)
        {
            printf("%d ", iNo);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    DisplayPrime(First);

    return 0;
}
