////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : FindMax
//      Description :   It is used to display the greater number between two numbers.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FindMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{
    int num1, num2, result;
    printf("Enter two numbers : \n");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);
    printf("Maximum is %d\n", result);

    return 0;
}