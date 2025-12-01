////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplaySchedule
//      Description :   Check whether given character is small case or not.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   C
Output  :   Your exam is at 9.20 AM

Input   :   d
Output  :   Your exam is at 10.30 AM
 
 */

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam is at 7 AM");
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam is at 8.30 AM");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam is at 9.20 AM");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam is at 10.30 AM");
    }
    else
    {
        printf("Invalid division name");
    }
    
}

int main()
{
    char cValue = '\0';
        
    printf("Enter your division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}