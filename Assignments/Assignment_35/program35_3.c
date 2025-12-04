////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Difference
//      Description :   Returns the difference between the count of capital and small letters.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "MarvellouS"

Output  :   6   (8-2)
 
 */

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCap   = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        } 
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        } 
        str++;
    }

    return (iSmall - iCap);
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}