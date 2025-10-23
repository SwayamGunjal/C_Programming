////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : sum_natural_numbers
//      Description :   It is used to print numbers from 1 to N.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;
}

int main()
{
    int limit;

    printf("Enter number : \n");
    scanf("%d",&limit);

    printf("%d\n", sum_natural_numbers(limit));

    return 0;
}

