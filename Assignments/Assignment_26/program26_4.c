////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Pattern
//      Description :   It is used to print the pattern: # number *, with numbers increasing from 1.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     5
Output :    #   1   *   #   2   *   #   3   *   #   4   *
Index :     1   2   3   4   5   6   7   8   9   10  11  12

 */

#include<stdio.h>

void Pattern(int iNo)
{
    int iNum = 1;
    int i = 0;

    for(i = 1; i < iNo * 2; i++)
    {
        if((i % 2) == 0)
        {
            printf("#\t%d",iNum);
            printf("\t*\t");
            iNum++;
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