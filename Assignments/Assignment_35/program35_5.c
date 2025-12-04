////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Reverse
//      Description :   It is used to return reverse of a string.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   MarvellouS
Output  :   "SuollevraM"
 
 */

#include<stdio.h>

void Reverse(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;
    
    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    Reverse(arr);


    return 0;
}