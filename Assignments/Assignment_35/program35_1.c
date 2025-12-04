////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountCapital
//      Description :   Count number of capital letters from the given string.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"

Output  :   4
 
 */

#include<stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}