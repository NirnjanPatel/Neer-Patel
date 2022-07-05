// Polymerphism types  1.Operator Overloading
// 2. Method Overloading or Function Overloading
#include <iostream>
using namespace std;
class Overloading
{
public:
    void sum(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }
    void sub(int a, int b)
    {
        cout << "Sub = " << a - b << endl;
    }
    void mul(int a, int b)
    {
        cout << "Mul = " << a * b << endl;
    }
};
int main()
{
    Overloading obj;
    // int a, b;
    // cout << "Enter a & b : ";
    // cin >> a >> b;
    obj.sum(12, 23);
    obj.sub(1, 2);
    obj.mul(66, 55);
    return 0;
}