////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : printTable
//      Description :   It is used to print the multiplication table of a number.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void printTable(int num)
    {
        int iCnt = 0;
        int iTab = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iTab = iCnt * num;
            System.out.println(iTab);
        }
        
    }
}

class Program17_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}