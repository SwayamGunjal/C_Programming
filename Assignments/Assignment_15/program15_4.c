////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : MultDigits
//      Description :   It is used to return multiplication of all digits of a given number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 1;


    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
  
        if (iDigit != 0)
        {
            iCount = iCount * iDigit;
        }
        

        iNo = iNo / 10;
    }
     
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}