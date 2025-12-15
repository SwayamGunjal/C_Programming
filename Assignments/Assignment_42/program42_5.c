////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Mult
//      Description :   Calculate the product of digits of the given number using recursion.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          16/12/2025
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

int Minimum(PNODE head)
{
    int iMin = head -> data;

    while (head != NULL)
    {
        if ((head -> data) < iMin)
        {
            iMin = head -> data;
        }

        head = head -> next;
    }

    return iMin;
    
}

int main()
{
    int iRet = 0, iRes = 0;

    PNODE head = NULL;


    InsertLast(&head,110);
    InsertLast(&head,230);
    InsertLast(&head,320);
    InsertLast(&head,240);
    
    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    iRes = Minimum(head);

    printf("Minimum : %d\n",iRes);

    
    return 0;
}