///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   It is used to print a given number repeatedly for a specified number of times.
//      Input :         Integer, Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (iCnt = 1; iCnt <= iFrequency  ; iCnt++)
    {
        printf("%d\t",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter frequency : \n");
    scanf("%d",&iCount);

    Display(iValue , iCount);

    return 0;
}