////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Reverse
//      Description :   Generic program to reverse the array.
//      Input :         Generic array, Integer
//      Output :        Void
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input  : 10    20    30    10    30    40    10    40    10
Output : 10    40    10    40    30    10    30    20    10

*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    for (iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        cout<<arr[iCnt]<<"\t";   
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    Reverse(arr,9);

    return 0;
}