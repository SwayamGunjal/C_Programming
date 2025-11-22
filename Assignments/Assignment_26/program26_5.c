////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description :   It prints a repeated pattern in the format:  #  number  *
//                      The numbers increase sequentially starting from 1.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input :     8
Output :    2   4   6   8   10  12  14  16
Index :     1   2   3   4   5   6   7   8

*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= (iNo * 2); i++)
    {
        if((i % 2) == 0)
        {
            printf("%d\t",i);
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