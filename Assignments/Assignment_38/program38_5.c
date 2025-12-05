////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : StrCpyToggle
//      Description :   Copies string from source to destination by toggling case.
//      Input :         Character
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Input   :   "Marvellous Python 2"

    Output  :   "mARVELLOUS pYTHON 2"
*/

#include <stdio.h>

void StrCpyToggle(char *Src, char *Dest)        
{
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src + 32;     
        }
        else if((*Src >= 'a') && (*Src <= 'z'))
        {
            *Dest = *Src - 32;     
        }
        else
        {
            *Dest = *Src;          
        }

        Src++;
        Dest++;
    }

    *Dest = '\0';   
}

int main()                                      
{
    char Arr[50] = {'\0'};                     
    char Brr[50] = {'\0'};

    printf("Enter the String : \n");           
    scanf("%[^\n]", Arr);

    StrCpyToggle(Arr, Brr);                     
    printf("Updated String : %s\n", Brr);       

    return 0;
}