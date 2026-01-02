////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Search
//      Description :   Checks if the element is present or not.
//      Input :         PNODE
//      Output :        BOOL
//      Author :        Swayam Satish Gunjal
//      Date :          01/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if (*first == NULL)                     //  LL is empty
    {
        *first = newn;   
    }
    else                                    //  LL contains atleast 1 node
    {
        newn -> next = (*first);
        (*first) = newn;
    }
    
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if (*first == NULL)                     //  LL is empty
    {
        (*first) = newn;   
    }
    else                                    //  LL contains atleast 1 node
    {
        temp = *first;

        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        
        temp -> next = newn;
    }
    
}

BOOL Search(PNODE head, int no)
{
    while (head != NULL)
    {
        if (head -> data == no)
        {
            return TRUE;
        }   
        head = head -> next;
    }
    return FALSE;
}

int main()
{
    BOOL bRet = FALSE;

    PNODE head = NULL;

    InsertFirst(&head,11);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,103);

    bRet = Search(head, 101);

    if (bRet == TRUE)
    {
        printf("Element is present!\n");
    }
    else
    {
        printf("Element is not present.\n");

    }

    return 0;
}