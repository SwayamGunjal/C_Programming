////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SecondMin
//      Description :   Generic program to return second smallest element from the array.
//      Input :         Generic array, Integer
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *arr, int iSize)
{
    T Min1 = arr[0];
    T Min2 = arr[1];

    if(Min1 > Min2)
        swap(Min1, Min2);

    for(int i = 2; i < iSize; i++)
    {
        if(arr[i] < Min1)
        {
            Min2 = Min1;
            Min1 = arr[i];
        }
        else if(arr[i] < Min2)
        {
            Min2 = arr[i];
        }
    }
    return Min2;
}


int main()
{
    int iRet = 0;
    int arr[] = {10,20,30,40,50};

    iRet = SecondMin(arr, 5);

    cout<<iRet;

    return 0;
}