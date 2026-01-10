////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Max
//      Description :   Generic program to find maximum of four values.
//      Input :         Generic value, Generic value, Generic value, Generic value
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

int main()
{
    int iRet = 0;
    int a = 45, b = 12, c = 78, d = 33;
    iRet = Max(a,b,c,d);
    cout<<iRet<<"\n";

    return 0;
}