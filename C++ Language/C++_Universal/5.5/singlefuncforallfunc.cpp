// Single func. for all func..
#include <iostream>
using namespace std;
class operation
{
private:
    int a, b;

public:
    int setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void add()
    {
        cout << "Add = " << a + b << endl;
    }
    void sub()
    {
        cout << "sub = " << a - b << endl;
    }
    int mult()
    {
        cout << "mult = " << a * b << endl;
        return a * b;
    }
};
int main()
{
    operation obj;
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;
    obj.setData(a, b);
    obj.add();
    obj.sub();
    obj.mult();
    // cout << "Multiplication = " << setData() << endl;
    // cout << "Multiplication = " << multi() << endl; // can't call
    cout << "Multiplication = " << a * b << endl;
}