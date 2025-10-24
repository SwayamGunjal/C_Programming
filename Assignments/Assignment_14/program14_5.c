////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Count
//      Description :   It is used to count the number of digits in a number that are less than 6.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
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

        if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}