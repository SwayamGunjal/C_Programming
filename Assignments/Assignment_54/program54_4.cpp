////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Reverse
//      Description :   Generic program to reverse an array.
//      Input :         Generic array, Integer
//      Output :        Nothing
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Reverse(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {
        cout<<arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iRet = 0;
    int arr[] = {10,20,30,40,50};

    Reverse(arr, 5);

    return 0;
}