////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : sum_of_even_factors
//      Description :   It is used to display the sum of all the even factors of a given number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int sum_of_even_factors(int number)
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
            if ((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
            
        }
        
    }

    return iSum;
    
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);
    
    printf("%d\n", sum_of_even_factors(number));

    return 0;
}