///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayFactor
//      Description :   It is used to display all the factors of a given number (excluding the number itself).
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = iNo - 1; iCnt > 0; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}