////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : FactDiff
//      Description :   It is used to display the difference between the sums of factors and non-factors of a given number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iFact = 0;
    
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }

        else if ((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        
        
    }

    return iFact - iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}