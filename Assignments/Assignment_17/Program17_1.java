////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : sumOfDigits
//      Description :   It is used to find the sum of digits of a number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumOfDigits(int num)
    {
        int iDigit = 0; 
        int iSum = 0;

        while (num != 0)
        {
            iDigit = num % 10 ;
            iSum = iSum + iDigit;
            num = num / 10  ;
        }
        System.out.println("Sum of digits : "+iSum);
        
    }
}

class Program17_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}