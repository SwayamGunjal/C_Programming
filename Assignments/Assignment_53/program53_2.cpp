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
bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if (arr[iCnt] > arr[iCnt + 1])
        {
            return false;
        }   
    }
    return true;
}

int main()
{
    bool bRet = false;
    int arr[] = {60,10,20,40,50};

    bRet = CheckSorted(arr, 5);
    
    if (bRet == true)
    {
        cout<<"Array is sorted\n";
    }
    else
    {
        cout<<"Array is not sorted\n";
    }
 

    return 0;
}