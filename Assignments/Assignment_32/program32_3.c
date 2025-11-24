////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   It prints a hollow square with '*' on the border and the reverse diagonal.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          24/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     

    iRow :  6
    iCol :  6

Output :    

    *   *   *   *   *   *
    *               *   *
    *           *       *
    *       *           *
    *   *               *
    *   *   *   *   *   *

 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
         
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
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