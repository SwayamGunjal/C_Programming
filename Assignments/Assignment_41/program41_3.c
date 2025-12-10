////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Strlen
//      Description :   Count the number of alphabetic characters in the given string using recursion.
//      Input :         String
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          10/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input   :   Hello
    Output  :   5

*/

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if (((*str >= 'a') && (*str <= 'z')) || ((*str >= 'A') && (*str <= 'Z')))
        {
            iCount++;
        } 
        str++;

        Strlen(str);
    }

    return iCount;

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;
}