////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : print_even_numbers
//      Description :   It is used to print all even numbers from 1 to N.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void print_even_numbers(int limit)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d \n",iCnt);
        }
        
    }
    
}

int main()
{
    int limit;

    printf("Enter number : \n");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
}

