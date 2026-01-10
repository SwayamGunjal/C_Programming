////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Replace
//      Description :   Generic program to replace old values in an array with new values.
//      Input :         Generic array, Integer, Generic value, Generic value
//      Output :        Nothing
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
void Replace(T *arr, int iSize, T oldVal, T newVal)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == oldVal)
        {
            arr[iCnt] = newVal;
        }
    }
}

int main()
{
    int i = 0;
    int arr[] = {10,20,90,10,40,50,10};

    Replace(arr, 7, 10, 0);

    for(i = 0; i < 7; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}
