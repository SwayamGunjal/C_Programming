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

    Input   :   5
    Output  :   5   4   3   2   1

*/

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;
    static int iFlag = 0;

    if (iFlag == 0)
    {
        iCnt = iNo;
        iFlag = 1;
    }
    
    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;

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