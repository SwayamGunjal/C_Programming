////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : is_divisible_by_five
//      Description :   It is used to check if the given nummber is divisible by 5 or not.
//      Input :         Integer
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          23/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number)
{
    int iCnt = 0;

    if (number < 0)
    {
        number = -number;
    }
    
    if ((number % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}    

int main()
{
    int number;

    printf("Enter number : \n");
    scanf("%d",&number);
    
    printf("%s\n",is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}