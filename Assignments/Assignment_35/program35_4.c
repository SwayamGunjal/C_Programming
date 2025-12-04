////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkVowel
//      Description :   Checks if the string contains a vowel or not.
//      Input :         Character
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "marvellous"
Output  :    Contains Vowel

Input   :   "Demo"
Output  :    Contains Vowel

Input   :   "xyz"
Output  :    There is no Vowel
 
 */

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i'|| *str == 'o' || *str == 'u' || 
            *str == 'A' || *str == 'E' || *str == 'I'|| *str == 'O' || *str == 'U')
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
    BOOL bRet = FALSE;
        
    printf("Enter string : \n");
    scanf("%[^\n]",arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}