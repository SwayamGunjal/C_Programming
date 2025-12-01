////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkAlpha
//      Description :   Check whether given character is an alphabet or not.
//      Input :         Character
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :     F
Output  :    TRUE

Input   :     &
Output  :    FALSE
 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = false;

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);

    if (bRet == true)
    {
        printf("It is a Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}