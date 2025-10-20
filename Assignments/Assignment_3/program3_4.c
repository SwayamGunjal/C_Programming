//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayConvert
//      Description :   It is used to convert the case of an alphabet uppercase to lowercase and lowercase to uppercase.
//      Input :         Char
//      Output :        Bool
//      Author :        Swayam Satish Gunjal
//      Date :          20/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if (CValue >= 'A' && CValue <= 'Z')
    {
        CValue = CValue + 32;

        printf("%c",CValue);
    }
    else if (CValue >= 'a' && CValue <= 'z')
    {
        CValue = CValue - 32;

        printf("%c",CValue);
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}