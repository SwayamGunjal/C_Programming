////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CountDiff
//      Description :   It is used to return the difference between the sum of even and odd digits of a number.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          24/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2) == 0)
        {    
            iEven = iEven + iDigit;
        }      
         if ((iDigit % 2) != 0)
        {    
            iOdd = iOdd + iDigit;
        }      
        

        iNo = iNo / 10;
    }
     
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}