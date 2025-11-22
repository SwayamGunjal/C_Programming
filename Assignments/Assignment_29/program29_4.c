////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Pattern
//      Description :   It prints positive numbers on odd rows and negative numbers on even rows.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          21/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     

    iRow :  5
    iCol :  5

Output :    

    1   2   3   4   5
   -1  -2  -3  -4  -5
    1   2   3   4   5
   -1  -2  -3  -4  -5
    1   2   3   4   5


 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int num = 0;

        if(i % 2 == 0)      
        {
            num = -1;
        }
        else               
        {
            num = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            if(num > 0)
            {
                printf("%d\t",num);
                num++;
            }
            else
            {
                printf("%d\t",num);
                num--;
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