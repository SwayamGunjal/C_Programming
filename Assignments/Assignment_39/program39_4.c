////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Displays a pattern using recursion.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          06/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Output  :   1   2   3   4   5

*/

#include<stdio.h>

void Display()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%C\t",ch);
        ch++;

        Display();
    }
    
}

int main()
{
    Display();

    return 0;
}