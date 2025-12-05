////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : StrCpyX
//      Description :   Copies string.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input   :   "Marvel lous Python"

    Output  :   "MarvellousPython"
*/

#include <stdio.h>

void StrCpyX(char *Src, char *Dest)          
{
    while(*Src != '\0')                        
    {
        if(*Src == ' ')
        {
            Src++;
            continue;
        }
        *Dest = *Src;
        Dest++;
        Src++;
    }
    *Dest = '\0'; 
}

int main()                                     
{
    char Arr[50] = {'\0'};                     
    char Brr[50] = {'\0'};

    printf("Enter the String : \n");            
    scanf("%[^\n]", Arr);

    StrCpyX(Arr, Brr);                         

    printf("Updated String : %s\n", Brr);       

    return 0;
}