////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Div
//      Description :   Generic program to divide 2 values.
//      Input :         Generic value, Generic value
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Div(T no1, T no2)
{
    T ans;
    ans = no1 / no2;
    return ans;
}

int main()
{
    int iRet = Div(10,5);
    cout<<iRet<<"\n";
    
    float fRet = Div(10.5f,5.4f);
    cout<<fRet<<"\n";
    
    return 0;
}