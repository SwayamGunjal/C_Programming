////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : calculateSum
//      Description :   It is used return the sumation of n natural numbers.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void calculateSum(int n)
    {
        int iCount = 0, iSum = 0;

        for (iCount = 1; iCount <= n; iCount++)
        {
            iSum += iCount;
        }
        
        System.out.println(iSum);
    }
}

class Program16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}