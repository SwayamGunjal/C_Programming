////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkCapital
//      Description :   Check whether given character is capital or not.
//      Input :         Character
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :     F
Output  :    TRUE

Input   :     d
Output  :    FALSE
 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    BOOL bFlag = false;

    if (ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if (bRet == true)
    {
        printf("It is a Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}