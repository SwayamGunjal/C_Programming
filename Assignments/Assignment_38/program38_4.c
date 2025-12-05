////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : StrCpySmall
//      Description :   Copies string from source to destination by converting all letters into lowercase.
//      Input :         Character
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input   :   "Marvellous Python 2"

    Output  :   "marvellous python 2"
*/

#include <stdio.h>

void StrCpySmall(char *Src, char *Dest)         
{
    while(*Src != '\0')                         
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src + 32;
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
    scanf("%[^'\n']s", Arr);

    StrCpySmall(Arr, Brr);

    printf("Updated String : %s\n", Brr); 

    return 0;
}