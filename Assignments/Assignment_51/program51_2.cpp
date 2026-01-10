////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Display
//      Description :   Generic program to print a value a specific number of times.
//      Input :         Generic value
//      Output :        Nothing
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

Input  : 10    20    30    10    30    40    10    40    10
Value to check frequency : 10
Output : 4

*/

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr, int iSize, T iNo)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if (arr[iCnt] == iNo)
        {
            iCount++;
        }
        
    }
    
    return iCount;
    
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    printf("%d",iRet);

    return 0;
}