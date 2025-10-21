////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : RangeSum
//      Description :   It is used to calculate and return the sum of all numbers between the given start and end range.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if (iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range");

        return 0;
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iValue1 >= 0 && iValue2 >= 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d",iRet);
    }
    

    return 0;
}