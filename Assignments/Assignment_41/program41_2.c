////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Sum
//      Description :   Calculate the sum of digits of the given number using recursion.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          10/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input   :   879
    Output  :   24

*/

#include<stdio.h>

int Sum(int iNo)
{
    static int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {

        iDigit = iNo % 10 ;
        iSum = iSum + iDigit;
        iNo = iNo / 10;


        Sum(iNo);
    }

    return iSum;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);

    return 0;
}