#include<iostream>
using namespace std;
void getsum()
{
    int a[34],sum=0;
    int size, i,q;
    cout << "Enter size of array = ";
    cin >> size;

    cout << "Enter array element = ";
    for (i = 0; i < size;i++)
    {
        cin >> a[i];
    }
    cout << "Array elements are = " << endl;
    for (i = 0; i < size;i++)
    {
        cout << a[i] << "\t";
    }
    for ( i = 0; i <size; i++)
    {
     sum = sum + a[i];
    }
        cout << "sum" << a[i] + a[size - 1] << endl;

     cout << "sum=" << sum<< endl;
}
int main()
{
    getsum();
    return 0;
}