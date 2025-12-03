////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Display alphabets from the entered character to the end in its case.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   A
Output  :   Decimal         65
            Octal           0101
            Hexadecimal     0X41
 
 */

#include<stdio.h>

void Display(char ch)
{
    
    printf("Decimal\t\t:\t%d\n",ch);
    printf("Octal\t\t:\t%04o\n",ch);
    printf("Hexadecimal\t:\t0X%X\n",ch);
 
}

int main()
{
    char cValue = '\0';
        
    printf("Enter your character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}