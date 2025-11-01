////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : reverseNumber
//      Description :   It is used to count the digits in a given number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countDigits(int num)
    {
        int iDigit = 0; 
        int iCount = 0;

        while (num != 0)
        {
            iDigit = num % 10 ;
            iCount++;
            num = num / 10  ;
        }
        System.out.println("Number of digits are : "+iCount);
        
    }
}

class Program16_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}