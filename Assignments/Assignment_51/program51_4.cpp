////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SearchFirst
//      Description :   Generic program to print the index of first occurance of a given number.
//      Input :         Generic array, Integer, Generic value 
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input  : 10    20    30    10    30    40    10    40    10
Value to search : 40
Output : 8

*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
    int iCnt = 0, iSearch = 0;

    for (iCnt = iSize; iCnt >= 0; iCnt--)
    {
        if (iNo == arr[iCnt])
        {
            iSearch = iCnt+1;
            break;
        }
        
    }

    return iSearch;
    
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(arr,9,40);
    printf("%d",iRet);

    return 0;
}