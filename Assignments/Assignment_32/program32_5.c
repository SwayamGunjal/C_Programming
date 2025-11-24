////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Prints a hollow square with numbered border and diagonal.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          24/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     

    iRow :  5
    iCol :  5

Output :    

    1   2   3   4   5
    1   2           5
    1       3       5
    1           4   5
    1   2   3   4   5
 
 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t",j);
            }
            else if (i == j)
            {
                printf("%d\t",i);
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