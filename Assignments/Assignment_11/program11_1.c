////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : RangeDisplay
//      Description :   It is used to display all numbers between the given start and end range.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}