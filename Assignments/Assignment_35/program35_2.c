////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountSmall
//      Description :   Count the number of lowercase letters in the given string.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous"

Output  :   9
 
 */

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        } 
        str++;
    }

    return iCount;
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}