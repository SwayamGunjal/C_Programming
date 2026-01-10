////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SumEven
//      Description :   Generic program to return summation of even elements in array.
//      Input :         Generic array, Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SumEven(T *arr, int iSize)
{
    T Sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) == 0)
        {
            Sum = Sum + arr[iCnt];
        }   
    }
    return Sum;
}

int main()
{
    int iRet = 0;
    int arr[] = {10,20,40,50,60};

    iRet = SumEven(arr, 5);
    
    cout<<iRet<<"\n";

    return 0;
}