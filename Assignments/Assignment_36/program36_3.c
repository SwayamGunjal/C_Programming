////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : strtogglex
//      Description :   Toggles all lowercase characters of string into uppercase and vice versa.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"
Output  :    mARVELLOUS mULTI os
 
 */

#include<stdio.h>

void strtogglex(char *str)
{

    while(*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
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

    strtogglex(arr);

    printf("Modified string is : %s",arr);

    return 0;
}