/*
    Function Name   : IsEmpty
    Description     : Check whether linked list is empty
    Author          : Shweta Gogawale
    Date            : 12-01-2026
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;

bool IsEmpty(PNODE Head)
{
    if(Head == NULL)
    {
        return true;
    }
    return false;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    bRet = IsEmpty(First);

    if(bRet == true)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list is not empty\n");
    }

    return 0;
}
