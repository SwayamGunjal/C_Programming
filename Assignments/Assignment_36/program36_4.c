////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayDigit
//      Description :   Prints only numbers in the given string.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "marve89llous121"
Output  :    89121
 
 */

#include<stdio.h>

void DisplayDigit(char *str)
{

    while(*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }     
        
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    DisplayDigit(arr);

    return 0;
}