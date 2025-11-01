////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : checkSign
//      Description :   It is used to check whether a number is positive, negative, or zero.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkSign(int num)
    {
        if(num == 0)
        {
            System.out.println("Number is Zero");
        }
        else if(num > 0)
        {
            System.out.println("Number is Positive");
        }
        else if(num < 0)
        {
            System.out.println("Number is Negative");
        }
    }
}

class Program18_5

{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}