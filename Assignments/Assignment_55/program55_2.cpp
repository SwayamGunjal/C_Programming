////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Sub
//      Description :   Generic program to substract 2 values.
//      Input :         Generic value, Generic value
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T Sub(T no1, T no2)
{
    T ans;
    ans = no1 - no2;
    return ans;
}

int main()
{
    int iRet = Sub(10,5);
    cout<<iRet<<"\n";

    float fRet = Sub(10.5f,5.4f);
    cout<<fRet<<"\n";
    
    return 0;
}