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

    Output  :   *   *   *   *   *

*/

#include<stdio.h>

void Display()
{
    static int iCnt = 0;

    if(iCnt < 5)
    {
        printf("*\t");
        iCnt++;

        Display();
    }
    
}

int main()
{
    Display();

    return 0;
}