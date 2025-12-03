////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkSpecial
//      Description :   Display alphabets from the entered character to the end in its case.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   %
Output  :   TRUE

Input   :   d
Output  :   FALSE

 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL bFlag = FALSE;

    if (ch >= '0' && ch <= '9' || ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        bFlag = FALSE;
    }
    else
    {
        bFlag = TRUE;
    }

    return bFlag;
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
        
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}