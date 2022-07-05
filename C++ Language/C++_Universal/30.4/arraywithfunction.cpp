// showing concept 0f array with function
#include <iostream>
using namespace std;
// Function definition
void getsum(int a[])
{
    int i, size;
    cout << "Enter size : ";
    cin >> size;
    cout << "Enter array elements : ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Array Elements are : ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
}
int main()
{
    int a[50];
    getsum(a); // calling function
}