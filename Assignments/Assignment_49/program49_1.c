////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Difference
//      Description :   Displays the difference between the greatest and smallest values in the LinkedList.
//      Input :         PNODE
//      Output :        Integer
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

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL \n");
    
}

int Difference(PNODE Head)
{
    int iMax = 0, iMin = 0;

    PNODE temp = NULL;
    temp = Head;

    iMax = temp -> data;
    iMin = temp -> data;

    if (Head == NULL)
    {
        return 0;
    }
    
    while (temp != NULL)
    {
        if (iMax < temp -> data)
        {
            iMax = temp -> data;
        }

        if (iMin > temp -> data)
        {
            iMin = temp -> data;
        }
        temp = temp -> next;
    }
    
    return (iMax - iMin);
}


int main()
{
    int iRet = 0;
    
    PNODE head = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,68);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,62);
    InsertLast(&head,103);

    Display(head);

    printf("\n");

    iRet = Difference(head);

    printf("Difference : %d",iRet);

    return 0;
}