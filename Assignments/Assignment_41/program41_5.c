////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Mult
//      Description :   Calculate the product of digits of the given number using recursion.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          10/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

    Input   :   523
    Output  :   30

*/

#include<stdio.h>

int Mult(int iNo)
{
    static int iDigit = 0;
    static int iProd = 1;

    if(iNo != 0)
    {

        iDigit = iNo % 10 ;
        iProd = iProd * iDigit;
        iNo = iNo / 10;


        Mult(iNo);
    }

    return iProd;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}