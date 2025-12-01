////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkSmall
//      Description :   Check whether given character is small case or not.
//      Input :         Character
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :     g
Output  :    TRUE

Input   :     D
Output  :    FALSE
 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    BOOL bFlag = false;

    if (ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if (bRet == true)
    {
        printf("It is a small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}