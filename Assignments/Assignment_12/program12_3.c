#include<stdio.h>

int sum_of_factors(int number)
{
    int iCnt = 0;
    int iSum = 0;

    if (number < 0)
    {
        number = -number;
    }
    
    for (iCnt = 1; iCnt <= number; iCnt++)
    {
        if ((number % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }

    return iSum;
    
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);
    
    printf("%d\n", sum_of_factors(number));

    return 0;
}