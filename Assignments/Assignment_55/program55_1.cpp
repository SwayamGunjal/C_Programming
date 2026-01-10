////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Add
//      Description :   Generic program to add 2 values.
//      Input :         Generic value, Generic value
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Add(T no1, T no2)
{
    T ans;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int iRet = Add(11,21);
    cout<<iRet<<"\n";
    
    float fRet = Add(5.5f,2.2f);
    cout<<fRet<<"\n";
    
    return 0;
}