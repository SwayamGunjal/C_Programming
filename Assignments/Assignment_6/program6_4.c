////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Multiply
//      Description :   It is used to return the multiplication of three numbers. 
//                      If any number is 0, it is ignored in multiplication.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          25/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iProd = 1;

    if (iNo1 != 0)
    {
        iProd = (iProd * iNo1);
    }
    if (iNo2 != 0)
    {
        iProd = (iProd * iNo2);
    }
    if (iNo3 != 0)
    {
        iProd = (iProd * iNo3);
    }

    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        iProd = (iNo1 * iNo2 * iNo3);
    }

    return iProd; 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three number : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d",iRet);

    return 0;
    
}