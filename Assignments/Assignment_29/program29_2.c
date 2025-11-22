////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Pattern
//      Description :   It prints even numbers on odd rows and odd numbers on even rows.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     

    iRow :  4
    iCol :  5

Output :    

    2 4 6 8 10
    1 3 5 7 9
    2 4 6 8 10
    1 3 5 7 9


 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int num = 0;

        if(i % 2 != 0)      
        {
            num = 2;
        }
        else               
        {
            num = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
            num += 2;
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