///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkEven
//      Description :   It is used to check if the given number is even or odd.
//      Input :         Integer
//      Output :        Bool
//      Author :        Swayam Satish Gunjal
//      Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
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
    scanf("%d",&iValue);;

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Number is even.");
    }
    else
    {
        printf("Number is odd.");
    }

    return 0;
}