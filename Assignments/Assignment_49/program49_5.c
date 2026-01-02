////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountTwoDigit
//      Description :   Displays sum of digits of each node in a LinkedList.
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

int CountTwoDigit(PNODE Head)
{
    int iDigCnt = 0, iCount = 0, iNo = 0;

    while (Head != NULL)
    {
        iNo = Head -> data;

        while (iNo != 0)
        {
            iDigCnt++;        
            iNo = iNo / 10;
        }
        
        if (iDigCnt == 2)
        {
            iCount++;
        }
           
        Head = Head -> next;
        iDigCnt = 0;
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
    InsertFirst(&head,68);
    InsertLast(&head,101);
    InsertLast(&head,102);
    InsertLast(&head,62);
    InsertLast(&head,103);

    iRet = CountTwoDigit(head);

    printf("Count of 2-Digit numbers : %d",iRet);

    return 0;
}