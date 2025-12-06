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

    Input   :   6
    Output  :   a   b   c   d   e   f

*/

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';

    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        ch++;
        iCnt++;

        Display(iNo);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}