///////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   It is used to print 5 to 1 numbers on screen.
//      Author :        Swayam Satish Gunjal
//      Date :          19/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("%d\t",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}