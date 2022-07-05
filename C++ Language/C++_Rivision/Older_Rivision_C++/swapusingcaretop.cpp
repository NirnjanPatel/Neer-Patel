// Swap 2 nos using ^ operator
// Using binary swapping method
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter  a & b = ";
    cin >> a >> b;
    cout << "Before Swapping :\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After Swapping :\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}