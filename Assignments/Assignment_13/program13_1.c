#include<stdio.h>

void print_numbers(int limit)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        printf("%d \n",iCnt);
    }
    
}

int main()
{
    int limit;

    printf("Enter number : \n");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;
}

