////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Pattern
//      Description :   It is used to display alphabets from A to given range.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input :     5
Output :    5   #   4   #  3    #   2   #   1   #

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iNum = iNo;
    int i = 0;

    for(i = 1; i <= iNo * 2; i++)
    {
        if((i % 2) == 0)
        {
            printf("#\t");
        }
        else
        {
            printf("%d\t", iNum);
            iNum--;
        }
    }
}

int main()
{
    int iValue = 0;
        
    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}