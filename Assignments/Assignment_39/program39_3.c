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

    Output  :   5   4   3   2   1

*/

#include<stdio.h>

void Display()
{
    static int iCnt = 5;

    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;

        Display();
    }
    
}

int main()
{
    Display();

    return 0;
}