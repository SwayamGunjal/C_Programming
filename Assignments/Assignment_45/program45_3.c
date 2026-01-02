////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : FirstOccurrence
//      Description :   Returns the position of the first occurrence of the given element;
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

int LastOccurrence(PNODE Head, int No)
{
    int iPos = 1, iLast = 0;

    while (Head != NULL)
    {
        if ((Head -> data) == No)
        {
            iLast = iPos;
        }   
        iPos++;
        Head = Head -> next;
    }
    return iLast;
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
int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,34);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,21);
    InsertLast(&head,103);

    Display(head);
    
    iRet = LastOccurrence(head,21);

    printf("Position of first occurrence : %d",iRet);

    return 0;
}