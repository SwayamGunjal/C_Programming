////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : findMin
//      Description :   It is used to find maximum of two numbers.
//      Input :         Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void findMin(int a, int b, int c)
    {
        if(a < b && a < c)
        {
            System.out.println("Greater number is "+a);
        }
        else if(b < a && b < c)
        {
            System.out.println("Greater number is "+b);
        }
        else if(c < a && c < b)
        {
            System.out.println("Greater number is "+c);
        }
        
    }
}

class Program17_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }
}