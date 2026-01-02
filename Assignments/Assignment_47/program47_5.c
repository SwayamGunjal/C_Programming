////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountPrime
//      Description   : Returns count of primenumbers present in a Linear LinkedList.
//      Input         : PNODE
//      Output        : Void
//      Author        : Swayam Satish Gunjal
//      Date          : 01/01/2026
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

int CountPrime(PNODE Head)
{
    int iCnt = 0; 
    int iNo = 0;
    int iCount = 0;

    while (Head != NULL)
    {
        iNo = Head->data;

        if (iNo > 1)
        {
            for (iCnt = 2; iCnt < iNo; iCnt++)
            {
                if ((iNo % iCnt) == 0)
                {
                    break;
                }
            }

            if (iCnt == iNo)
            {
                iCount++;
            }
        }

        Head = Head->next;
    }

    return iCount;

}

int main()
{   
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,2);
    InsertFirst(&head,7);
    InsertFirst(&head,11);
    InsertFirst(&head,68);
    InsertLast(&head,19);
    InsertLast(&head,102);
    InsertLast(&head,62);
    InsertLast(&head,103);

    iRet = CountPrime(head);

    printf("Prime count : %d",iRet);

    return 0;
}