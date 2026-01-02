////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckAllPositive
//      Description :   Displays the difference between the greatest and smallest values in the LinkedList.
//      Input :         PNODE
//      Output :        Integer
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

BOOL CheckAllPositive(PNODE Head)
{
    while (Head != NULL)
    {
        if (Head -> data < 0)
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

    InsertFirst(&head,10);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,-68);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,62);
    InsertLast(&head,103);

    Display(head);

    printf("\n");

    bRet = CheckAllPositive(head);

    if (bRet == TRUE)
    {
        printf("All elements are positive!");
    }
    else
    {
        printf("All elements are not positive.");
    }
    

    return 0;
}