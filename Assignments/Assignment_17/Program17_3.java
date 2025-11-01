////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : findMax
//      Description :   It is used to find maximum of two numbers.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println("Greater number is "+a);
        }
        else
        {
            System.out.println("Greater number is "+b);
        }
        
    }
}

class Program17_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}