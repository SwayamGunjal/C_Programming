////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : SumOdd
//      Description :   Generic program to return summation of odd elements in array.
//      Input :         Generic array, Integer
//      Output :        Integer
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T SumOdd(T *arr, int iSize)
{
    T sum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) != 0)
        {
            sum = sum + arr[iCnt];
        }   
    }

    return sum;
}

int main()
{
    int iRet = 0;
    int arr[] = {10,20,40,50,60};

    iRet = SumOdd(arr, 5);
    
    cout<<iRet<<"\n";

    return 0;
}