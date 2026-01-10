////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function name : Swap
//      Description :   Generic program to swap 2 values.
//      Input :         Generic value, Generic value
//      Output :        Nothing
//      Author :        Swayam Satish Gunjal
//      Date :          10/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void Swap(T &no1, T &no2)
{
    T temp = no1;
    no1 = no2;
    no2 = temp;

    cout<<no1<<" "<<no2<<"\n";
}

int main()
{
    int a = 10, b = 20;
    Swap(a, b);

    float x = 3.5f, y = 7.8f;
    Swap(x, y);

    return 0;
}
