////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Fact
//      Description :   Calculate the factorial of a given number using recursion.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          10/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input   :   5
    Output  :   120

*/

#include<stdio.h>

int Fact(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    if (iCnt <= iNo)
    {
        iFact = iFact * iCnt;

        iCnt++;

        Fact(iNo);
    }
    

    return iFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}