////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   It is used to display name of the entered single digit number and deem double digit number as invalid number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          25/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;        
    }

    return iFact;
    

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}