// one func for all function to get only a few memory allocation
#include <iostream>
using namespace std;
class operations
{
public:
    void add(int a, int b)
    {
        cout << "Add = " << a + b << endl;
    }

public:
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
    int a, b;
    cout << "Enter a & b = ";
    cin >> a >> b;
    operations obj;
    obj.add(a, b);
    obj.sub(a, b);
    obj.mul(a, b);
}