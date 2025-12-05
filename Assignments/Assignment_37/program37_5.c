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

#include<stdio.h>

void StrRevX(char str[])                       
{
    char *Start = str;                         
    char *End = str;
    char temp = '\0';

    while(*End != '\0')                        
    {
        End++;
    }
    End--;

    while(End > Start)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()                                      
{
    char Arr[50] = {'\0'};                     

    printf("Enter the String : \n");            
    scanf("%[^\n]", Arr);

    StrRevX(Arr);                               

    printf("Updated String : %s\n", Arr);      

    return 0;
}