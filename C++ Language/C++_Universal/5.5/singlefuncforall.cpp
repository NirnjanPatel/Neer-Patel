// Single func. for all func..
#include <iostream>
using namespace std;
class operation
{
private:
    int a, b;

public:
    void add(int a, int b)
    {
        cout << "Add = " << a + b << endl;
    }
    void sub(int a, int b)
    {
        cout << "sub = " << a - b << endl;
    }
    void mult(int a, int b)
    {
        cout << "mult = " << a * b << endl;
    }
};
int main()
{
    operation obj;
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;
    obj.add(a, b);
    obj.sub(a, b);
    obj.mult(a, b);
}