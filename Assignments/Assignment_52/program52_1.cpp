////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Multiply
//      Description :   Generic program to multiply 2 values.
//      Input :         Generic value, Generic value
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout <<iRet<<"\n";
    float fRet = Multiply(10.0f,20.0f);
    cout <<iRet<<"\n";

    return 0;
}