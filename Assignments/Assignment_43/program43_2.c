////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayPrime
//      Description :   Display all prime numbers from the singly linked list.
//      Input :         PNODE
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          16/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input structure : | 11 |->| 20 |->| 17 |->| 41 |->| 22 |->| 89 |->NULL

Output          : 11      17      41      89

*/

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

int Count(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
    
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if ((*first) == NULL)                   //  Case 1
    {
        return;
    }
    else if ((*first) -> next == NULL)      //  Case 2
    {
        free(*first);
        *first = NULL;
    }
    else                                    //  Case 3
    {
        temp = *first;
        *first = (*first) -> next;
        free(temp);
        
    }  
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if ((*first) == NULL)                   //  Case 1
    {
        return;
    }
    else if ((*first) -> next == NULL)      //  Case 2
    {
        free(*first);
        *first = NULL;
    }
    else                                    //  Case 3
    {
        temp = *first;

        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);
        temp -> next = NULL;
        
    }  
}

void DisplayPrime(PNODE head)
{
    int iFreq = 0, iNo = 0, iCnt = 0;

    while (head != NULL)
    {
        iNo = head -> data;
        iFreq = 0;

        for (iCnt = 2; iCnt < iNo; iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                iFreq++;
                break;
            }
        }
        
        if (iFreq == 0)
        {
            printf("%d\t", iNo);
        }

        head = head -> next;
        
    }
    
    
}

int main()
{
    int iRet = 0, iRes = 0;

    PNODE head = NULL;


    InsertLast(&head,11);
    InsertLast(&head,20);
    InsertLast(&head,17);
    InsertLast(&head,41);
    InsertLast(&head,22);
    InsertLast(&head,89);
    
    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DisplayPrime(head);

    
    return 0;
}