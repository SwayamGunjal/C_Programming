////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckEvenOdd
//      Description :   It is used to check if the number is even or odd.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckEvenOdd(int num)
{
    if ((num % 2) == 0)
    {
        printf("Number is Even.");
    }
    else
    {
        printf("Number is Odd.");
    }
    
}

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}