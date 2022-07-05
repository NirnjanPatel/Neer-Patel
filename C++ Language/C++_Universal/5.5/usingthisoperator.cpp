// Using this -> operator
#include <iostream>
using namespace std;
class Demo
{
private:
    int a, b;

public:
    void getData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void add()
    {
        cout << "Add = " << a + b << endl;
    }
    void sub()
    {
        cout << "sub = " << a - b << endl;
    }
    void mul()
    {
        cout << "mul = " << a * b << endl;
    }
};
int main()
{
    Demo obj;
    int a, b;
    cout << "Enter a & b :  ";
    cin >> a >> b;
    obj.getData(a, b);
    obj.add();
    obj.sub();
    obj.mul();
}