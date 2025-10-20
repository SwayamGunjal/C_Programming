//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   It is used to print "Hello" if the number is less than 10, otherwise prints "Demo".
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    } 
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}