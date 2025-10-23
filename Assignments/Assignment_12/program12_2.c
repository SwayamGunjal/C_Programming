////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : count_factors
//      Description :   It is used to display the count of all the factors of a given number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int count_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;

    if (number < 0)
    {
        number = -number;
    }
    
    for (iCnt = 1; iCnt <= number; iCnt++)
    {
        if ((number % iCnt) == 0)
        {
            iCount++;
        }
        
    }

    return iCount;
    
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);
    
    printf("%d\n", count_factors(number));

    return 0;
}