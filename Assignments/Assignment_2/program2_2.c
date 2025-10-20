/////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   It is used to print the desired number of '*' on screen.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          19/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }    
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}