////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckNumberType
//      Description :   It is used to check if a number is positive, negative or zero.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckNumberType(int num)
{
    if (num < 0)
    {
        printf("Number is negative");
    }
    else if (num == 0)
    {
        printf("Number is 0");
    }
    else
    {
        printf("Number is  positive");
    }
    
    
}

int main()
{
    int number; 
    
    printf("Enter number : \n");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}