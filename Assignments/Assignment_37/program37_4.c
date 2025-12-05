////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : LastChar
//      Description :   Returns the last occurrence index of the specified character in a string and if its not present returns -1.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"
             M
Output  :    11

Input   :   "Marvellous Multi OS"
             W
Output  :    -1

Input   :   "Marvellous Multi OS"
             e
Output  :    4
 
 */

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;

    while (*str != '\0')
    {
        str++;
        iIndex++;
    }

    str--;
    iIndex--;

    while (iIndex >= 0)
    {
        if (*str == ch)
        {
            return iIndex;
        }
        iIndex--;
        str--;
    }

    return -1;    
    
}

int main()
{
    char arr[40] = {'\0'};
    char cValue = '\0';
    int iRet = 0;
        
    printf("Enter string : \n");
    scanf("%[^\n]",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Index : %d",iRet);
    

    return 0;
}