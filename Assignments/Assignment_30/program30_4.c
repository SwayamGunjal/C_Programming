////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Pattern
//      Description :   It prints a hollow rectangle with '*' as the border and '@' inside.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     

    iRow :  6
    iCol :  5

Output :    

    *   *   *   *   *
    *   @   @   @   *
    *   @   @   @   *
    *   @   @   @   *
    *   @   @   @   *
    *   *   *   *   *

 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
        
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
        
    printf("Enter number of Rows and Columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}