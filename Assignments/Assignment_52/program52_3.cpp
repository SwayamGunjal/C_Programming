////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : AddN
//      Description :   Generic program to find sum of elements within a generic array.
//      Input :         Generic array, Integer
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr,int iSize)
{
    T iSum;

    int i = 0;

    for (i = 0, iSum = 0; i < iSize; i++)
    {
        iSum = iSum + arr[i];
    }
    
    return iSum;
    
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iSum = AddN(arr,5);
    cout<<iSum<<"\n";

    float fSum = AddN(brr,4);
    cout<<fSum<<"\n";
    

    return 0;
}