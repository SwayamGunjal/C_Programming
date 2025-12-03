////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : DisplayASCII
//      Description :   Displays ASCII table from 0 to 255.
//      Input :         Integer
//      Output :        void
//      Author :        Swayam Satish Gunjal
//      Date :          02/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayASCII()
{
    int iDec = 0;
    int iOct = 00;
    int iHex = 0x00;

    printf("----------------------\n");
    printf("\tDecimal\t\n");    
    printf("----------------------\n");    

    for (iDec = 0; iDec <= 255; iDec++)
    {
        printf("\t%d\t\n",iDec);
    }

    printf("----------------------\n");
    printf("\tOctal\t\n");
    printf("----------------------\n");
    
    for (iOct = 00; iOct <= 0377; iOct++)
    {
        printf("\t%04o\t\n",iOct);    
    }

    printf("-----------------------------\n");
    printf("\tHexadecimal\t\n");
    printf("-----------------------------\n");

    for (iHex = 0x00; iHex <= 0xFF; iHex++)
    {

        printf("\t%X\t\n",iHex);

    }
 
}

int main()
{

    DisplayASCII();

    return 0;
}