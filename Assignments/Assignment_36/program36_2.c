////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : struprx
//      Description :   Converts all lowercase characters of string into uppercase.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"
Output  :    MARVELLOUS MULTI OS
 
 */

#include<stdio.h>

void struprx(char *str)
{

    while(*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }       
        
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    struprx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}