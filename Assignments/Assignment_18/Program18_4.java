////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : sumEvenOddDigits
//      Description :   It is used to display sum of even and odd digits seperately in a number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void sumEvenOddDigits(int num)
    {
        int iDigit = 0; 
        int iEvenS = 0;
        int iOddS = 0;

        while (num != 0)
        {
            iDigit = num % 10 ;
            
            if((iDigit % 2) == 0)
            {
                iEvenS = iEvenS + iDigit;
            }
            
            if((iDigit % 2) != 0)
            {
                iOddS = iOddS + iDigit;
            }

            num = num / 10;
        }
        

            System.out.println("Sum of even digits : "+iEvenS);

            System.out.println("Sum of odd digits : "+iOddS);
    }
}

class Program18_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}