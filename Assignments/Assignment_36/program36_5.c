////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountWhite
//      Description :   Returns count of whitespaces in a string array.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "MarvellouS"
Output  :    0

Input   :   "MarvellouS Infosystems"
Output  :    1

Input   :   "MarvellouS Infosystems written by Swayam Satish Gunjal"
Output  :    6
 
 */

#include<stdio.h>

int CountWhite(char *str)
{
    int iWCount = 0;

    while(*str != '\0')
    {
        if (*str == ' ')
        {
            iWCount++;
        }     
        
        str++;
    }

    return iWCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}