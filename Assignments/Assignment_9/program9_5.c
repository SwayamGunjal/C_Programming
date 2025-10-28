////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : FactorialDiff
//      Description :   It is used to display difference between even factorial and odd factorial of a given number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;      
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        
        }
                
    }

    return iEvenFact - iOddFact;
    

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}