////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : print_factors
//      Description :   It is used to display all the factors of a given number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void print_factors(int number)
{
    int iCnt = 0;

    if (number < 0)
    {
        number = -number;
    }
    
    for (iCnt = 1; iCnt <= number; iCnt++)
    {
        if ((number % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);
    
    print_factors(number);

    return 0;
}