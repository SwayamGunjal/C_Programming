////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : checkPrime
//      Description :   It is used to check if given number is prime or not.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPrime(int num)
    {
        int iCnt = 0;
        boolean bPrime = false;

        bPrime = true;
        for(iCnt = 2; iCnt <= (num/2); iCnt++)
        {
            if ((num % iCnt) == 0) 
            {
                bPrime = false;
            }
        }

        if (bPrime) 
        {
            System.out.println("It is a prime number");
        }
        else
        {
            System.out.println("It is not a prime number");
        }
        
    }
}

class Program18_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}