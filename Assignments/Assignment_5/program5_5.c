////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : FindLargest
//      Description :   It is used to display greatest number among 3 different numbers.
//      Input :         Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FindLargest(int x, int y, int z)
{
    if (x > y)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
    
    
}

int main()
{
    int a, b, c, result;
    printf("Enter three numbers : \n");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);
    printf("Largest number is : %d\n", result);

    return 0;
}