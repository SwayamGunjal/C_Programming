////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : MakeAbsolute
//      Description :   Displays absolute values of the values in the LinkedList.
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

void DisplayGreaterThanAvg(PNODE Head)
{
    int iSum = 0, iAvg = 0;
    int iTotal = Count(Head);

    PNODE temp = Head;

    while (temp != NULL)
    {
        iSum = iSum + temp -> data;           
        temp = temp -> next;
    }
    
    printf("\nTotal : %d\n",iTotal);    //  Cross-checking Total
    
    printf("\nSum : %d\n",iSum);        //  Cross-checking Sum

    iAvg = iSum / iTotal;

    temp  = Head;

    printf("\nAverage : %d\n\n",iAvg);  //  Cross-checking Average

    while (temp != NULL)
    {
        if (temp->data > iAvg)
        {
            printf("| %d |->",temp -> data);
            
        }
        temp = temp -> next; 
    }
    printf("NULL \n");
    
}

int main()
{    
    PNODE head = NULL;

    InsertFirst(&head,3);
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,-68);
    InsertLast(&head,101);
    InsertLast(&head,-102);
    InsertLast(&head,-69);
    InsertLast(&head,103);

    Display(head);
    Count(head);

    printf("After function implementation :\n");

    DisplayGreaterThanAvg(head);

    return 0;
}