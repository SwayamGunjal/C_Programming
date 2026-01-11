////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Toggle the case of the given character.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   Q
Output  :   q

Input   :   m
Output  :   M

Input   :   4
Output  :   4

Input   :   %
Output  :   %
 
 */

#include<stdio.h>

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n", ch);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c\n", ch);
    }
    else
    {
        printf("%c\n", ch);
    }
    
}

int main()
{
    char cValue = '\0';
        
    printf("Enter your character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}