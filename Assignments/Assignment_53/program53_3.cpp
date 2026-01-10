////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CheckSorted
//      Description :   Generic program to check whether array is sorted in ascending order or not.
//      Input :         Generic array, Integer
//      Output :        Boolean value
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *arr, int iSize)
{
    T Max1 = arr[0];
    T Max2 = arr[0];

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] > Max1)
        {
            Max2 = Max1;
            Max1 = arr[i];
        }
        else if(arr[i] > Max2 && arr[i] != Max1)
        {
            Max2 = arr[i];
        }
    }
    return Max2;
}

int main()
{
    int iRet = 0;
    int arr[] = {10,20,30,40,50};

    iRet = SecondMax(arr, 5);

    cout<<iRet;

    return 0;
}