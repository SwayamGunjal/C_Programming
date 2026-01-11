////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Display alphabets from the entered character to the end in its case.
//      Input :         Character
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          03/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   Q
Output  :   Q   R   S   T   U   V   W   X   Y   Z

Input   :   m
Output  :   m   l   k   j   i   h   g   f   e   d   c   b   a

Input   :   8
Output  :   
 
 */

#include<stdio.h>

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (int iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t",iCnt);
        }
        
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (int iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        printf(" ");
    }
    
}

int main()
{
    char cValue = '\0';
        
    printf("Enter your character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}