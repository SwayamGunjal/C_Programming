////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountChar
//      Description :   Returns the count or frequency of a letter's occurrence within a string.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "Marvellous Multi OS"
             M
Output  :    2

Input   :   "Marvellous Multi OS"
             W
Output  :    0
 
 */

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
    
}

int main()
{
    char arr[40];
    char cValue;
    int iRet = 0;
        
    printf("Enter string : \n");
    scanf("%[^\n]",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is : %d",iRet);
    

    return 0;
}