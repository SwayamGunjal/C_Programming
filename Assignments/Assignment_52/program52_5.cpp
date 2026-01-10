////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Min
//      Description :   Generic program to find Smallest element in the array.
//      Input :         Generic array, Integer
//      Output :        Generic value
//      Author :        Swayam Satish Gunjal
//      Date :          09/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr,int iSize)
{

    int i = 0;
    T Small = arr[0];

    for (i = 1; i < iSize; i++)
    {
        if (arr[i] < Small)
        {
            Small = arr[i];
        }
        
    }
    
    return Small;
    
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iSum = Min(arr,5);
    cout<<iSum<<"\n";

    float fSum = Min(brr,4);
    cout<<fSum<<"\n";
    

    return 0;
}