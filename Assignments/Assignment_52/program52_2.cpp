////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Max
//      Description :   Generic program to find the largest number among 3 values.
//      Input :         Generic value, Generic value, Generic value
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T no1, T no2, T no3)
{
    if (no1 > no2 && no1 > no3)
    {
        cout<<no1<<" is largest."<<"\n";
    }
    else if (no2 > no1 && no2 > no3)
    {
        cout<<no2<<" is largest."<<"\n";
    }
    else
    {
        cout<<no3<<" is largest."<<"\n";
    }
    
}

int main()
{

    Max(4,3,1);

    return 0;
}