////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : checkPalindrome
//      Description :   It is used to check whether a number is a palindrome or not.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkPalindrome(int num)
    {
        int iDigit = 0; 
        int iRev = 0;
        int temp = num;

        while (num != 0)
        {
            iDigit = num % 10 ;
            iRev = (iRev*10) + iDigit;
            num = num / 10;
        }
        
        if(iRev == temp)
        {
            System.out.println("Number is palindrome");
        }
        else
        {
            System.out.println("Number is not a palindrome");
        }
        
    }
}

class Program17_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}