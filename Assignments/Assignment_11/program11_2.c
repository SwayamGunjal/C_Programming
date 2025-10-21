////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : RangeDisplayEven
//      Description :   It is used to display all even numbers between the given start and end range.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if (iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if ((iCnt % 2) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}