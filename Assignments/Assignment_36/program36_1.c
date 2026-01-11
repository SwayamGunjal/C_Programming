////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : strwrx
//      Description :   Converts all uppercase characters of string into lowercase.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"
Output  :   marvellous multi os
 
 */

#include<stdio.h>

void strwrx(char *str)
{

    while(*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }       
        
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    strwrx(arr);

    printf("Modified string is %s",arr);

    return 0;
}