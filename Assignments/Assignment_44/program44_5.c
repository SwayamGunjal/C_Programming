////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayEven
//      Description :   Displays only even elements in the LinkedList.
//      Input :         PNODE
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

void DisplayEven(PNODE head)
{
    while (head != NULL)
    {
        if (((head -> data) % 2) == 0)
        {
            printf("| %d |->",head->data);
        }   
        head = head -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,68);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,62);
    InsertLast(&head,103);

    DisplayEven(head);

    return 0;
}