////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Percentage
//      Description :   It is used to calculate the percentage of obtained marks out of total marks.
//      Input :         Integer
//      Output :        Float
//      Author :        Swayam Satish Gunjal
//      Date :          25/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fAvg = 0.0;

    if (iNo1 > 0 && iNo2 > 0)
    {
        fAvg = ((float)iNo2 / (float)iNo1) * 100;
    }

    return fAvg;
}d

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percent : %f ",fRet);

    return 0;
    
}