////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckLeapYear
//      Description :   It is used to check if an year is a Leap year or not.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckLeapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400) == 0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
}

int main()
{
    int yr;

    printf("Enter year : \n");
    scanf("%d", &yr);
    
    CheckLeapYear(yr);
    
    return 0;
}