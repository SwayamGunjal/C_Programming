///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : FactRev
//      Description :   It is used to display all the factors of a given number in reverse.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
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
    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
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