////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayEvenFactor
//      Description :   It is used to display all the even factors of a given number (excluding the number itself).
//      Input :         Integer
//      Output :        Bool
//      Author :        Swayam Satish Gunjal
//      Date :          20/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
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

    DisplayEvenFactor(iValue);

    return 0;
}