///////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Check
//      Description :   It is used to check if the number is divisible by 5 or not.
//      Input :         Integer
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}