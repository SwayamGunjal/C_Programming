////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : StrRevX
//      Description :   Reverses the string.
//      Input :         Character
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          05/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 
Input   :   "abcd"
            
Output  :   "dcba"

Input   :   "abba"
             
Output  :   "abba"
 
 */

#include <stdio.h>

void StrRevX(char *Src, char *Dest)           
{
    char *Start = Dest;                         
    char *End = Src;

    while(*End != '\0')                         
    {
        End++;
    }
    End--;

    while(End >= Src)
    {
        *Start = *End;
        Start++;
        End--;
    }
}

int main()                                      
{
    char Arr[50] = {'\0'};                      
    char Brr[50] = {'\0'};

    printf("Enter the String : \n");            
    scanf("%[^\n]", Arr);

    StrRevX(Arr, Brr);                          

    printf("Updated String : %s\n", Brr);       

    return 0;
}