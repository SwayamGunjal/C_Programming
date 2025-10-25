////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : ChkEqual
//      Description :   It is used to check if the given 2 numbers are equals of each other or not.
//      Input :         Integer
//      Output :        Boolean
//      Author :        Swayam Satish Gunjal
//      Date :          25/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two number : \n");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if (bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
    
}