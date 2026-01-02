////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : IncrementAll
//      Description :   Increments all data values by 1.
//      Input :         PPNODE
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

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

// void Display(PNODE first)
// {
//     while (first != NULL)
//     {
//         printf("| %d |->",first -> data);
//         first = first -> next;
//     }
//     printf("NULL \n");
    
// }

void DisplayReverse(PNODE Head)
{
    if (Head == NULL)
    {
        return;
    }

    DisplayReverse(Head->next);
    printf("| %d |->", Head->data);
}

int main()
{
    PNODE head = NULL;
    PNODE head1 = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,21);
    InsertFirst(&head,-7);
    InsertFirst(&head,68);
    InsertLast(&head,101);
    InsertLast(&head,-6);
    InsertLast(&head,62);
    InsertLast(&head,-9);

    // Display(head);

    DisplayReverse(head);

    return 0;
}