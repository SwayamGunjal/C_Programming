///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SumNonFact
//      Description :   It is used to display sum of all the Non-factors of a given number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
        
    }

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}