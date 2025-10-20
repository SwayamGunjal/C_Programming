///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : PrintEven
//      Description :   It is used to accept a number and print that number of even numbers on screen.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 2; iCnt <= (iNo*2); iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}