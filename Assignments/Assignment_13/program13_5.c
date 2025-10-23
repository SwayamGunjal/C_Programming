////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : sum_even_numbers
//      Description :   It is used to print the sum of natural numbers from 1 to N.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    
    return iSum;
}

int main()
{
    int limit;

    printf("Enter number : \n");
    scanf("%d",&limit);

    printf("%d\n", sum_even_numbers(limit));

    return 0;
}

