////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkZero
//      Description :   It is used to check whether the given number contains the digit 0 or not.
//      Input :         Integer
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {    
            return 1;
        }       

        iNo = iNo / 10;
    }
     
    return 0;
        
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}