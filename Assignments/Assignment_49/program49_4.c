////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountDivByFive
//      Description :   Displays elements in the even position in the LinkedList.
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

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL \n");
    
}

int CountDivByFive(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
    {
        if ((Head->data % 5) == 0)
        {
            iCount++;
        }
        Head = Head->next;
    }

    return iCount;
}


int main()
{
    int iRet = 0;
    
    PNODE head = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,60);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,62);
    InsertLast(&head,103);

    Display(head);

    printf("\n");

    iRet = CountDivByFive(head);

    printf("Count of Elements divisible by 5 : %d", iRet);

    return 0;
}