////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Displays a pattern using recursion.
//      Input :         Character
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          06/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Output  :   a   b   c   d   e   f

*/

#include<stdio.h>

void Display()
{
    static char ch = 'a';

    if(ch >= 'a' && ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;

        Display();
    }
    
}

int main()
{
    Display();

    return 0;
}