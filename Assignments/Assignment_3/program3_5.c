///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkVowel
//      Description :   It is used to check if the given alphabet is a vowel or not.
//      Input :         Char
//      Output :        Bool
//      Author :        Swayam Satish Gunjal
//      Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>


bool ChkVowel(char CValue)
{
    if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
    CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == true)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    

    return 0;
}