////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountTwo
//      Description :   It is used to count the number of times the digit 4 appears in a given number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4)
        {    
            iCount ++;
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

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}