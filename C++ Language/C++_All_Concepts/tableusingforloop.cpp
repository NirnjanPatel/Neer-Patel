// Table using for loop
#include <iostream>
using namespace std;
int main()
{
    int i, num;
    cout << "Enter a no. : ";
    cin >> num;
    for (i = 10; i >= 1; i--)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
