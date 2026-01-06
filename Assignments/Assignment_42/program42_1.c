////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SearchFirstOcc
//      Description :   Find the position of the first occurrence of the given element in the singly linked list.
//      Input :         PNODE, Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          16/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input structure : | 10 |->| 20 |->| 30 |->| 40 |->| 50 |->| 30 |->| 70 |->NULL

Input     : 30

Output    : 3

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



int SearchFirstOcc(PNODE head, int no)
{
    int iPos = 1;

    while (head != NULL)
    {
        if (head -> data == no)
        {
            break;
        }
        iPos++;
        
        head = head -> next;
    }


    return iPos;
    
}

int main()
{
    int iRet = 0, iRes = 0;

    PNODE head = NULL;


    InsertLast(&head,10);
    InsertLast(&head,20);
    InsertLast(&head,30);
    InsertLast(&head,40);
    InsertLast(&head,50);
    InsertLast(&head,30);
    InsertLast(&head,70);
    
    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    iRes = SearchFirstOcc(head, 30);

    printf("Position : %d\n",iRes);

    
    return 0;
}