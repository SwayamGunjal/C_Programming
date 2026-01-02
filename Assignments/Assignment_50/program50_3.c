////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckSorted
//      Description :   Checks if the elements in LL are in sorted order and in ascending order or not.
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

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL \n");
    
}

BOOL CheckSorted(PNODE Head)
{
    while (Head->next != NULL)
    {
        if ((Head -> data) > (Head->next-> data))
        {
            return FALSE;
        }
        Head = Head->next;
    }
    return TRUE; 
}

int main()
{
    BOOL bRet = FALSE;
    
    PNODE head = NULL;

    InsertFirst(&head,20);
    InsertFirst(&head,15);
    InsertFirst(&head,10);
    InsertFirst(&head,5);
    InsertLast(&head,25);
    InsertLast(&head,30);
    InsertLast(&head,35);
    InsertLast(&head,40);

    Display(head);

    printf("\n");

    bRet = CheckSorted(head);

    if (bRet == TRUE)
    {
        printf("Elements are Sorted in Ascending Order!");
    }
    else
    {
        printf("Elements are not sorted.");
    }
    

    return 0;
}