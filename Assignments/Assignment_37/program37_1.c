////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkChar
//      Description :   Checks whether character is present in the string.
//      Input :         Character
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"
             e
Output  :    FALSE

Input   :   "Marvellous Multi OS"
             W
Output  :    FALSE
 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }

    return bFlag;
    
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;
        
    printf("Enter string : \n");
    scanf("%[^\n]",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}