////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkDigit
//      Description :   Check whether given character is capital or not.
//      Input :         Character
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :     7
Output  :    TRUE

Input   :     d
Output  :    FALSE
 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bFlag = false;

    if (ch >= '0' && ch <= '9')
    {
        bFlag = true;
    }

    return bFlag;
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;
        
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if (bRet == true)
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}