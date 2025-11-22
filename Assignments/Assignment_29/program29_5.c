////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Pattern
//      Description :   It prints a matrix where each row starts from its row number and increments by 1.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     

    iRow :  4
    iCol :  4

Output :    

    1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7


 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, num = i; j <= iCol; j++, num++)
        {
            printf("%d\t",num);   
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