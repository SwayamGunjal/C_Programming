////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : CopyArray
//      Description :   Generic program to copy one array into another array.
//      Input :         Generic array, Generic array, Integer
//      Output :        Nothing
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src, T *dest, int iSize)
{

    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        cout<<dest[iCnt]<<"\t";
    }
    cout<<"\n";
    
}

int main()
{
    int arr[100] = {10,20,30,40,50};
    int brr[100];

    CopyArray(arr,brr, 5);    

    return 0;
}