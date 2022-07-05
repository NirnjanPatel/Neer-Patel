// Same functions in different types of namespaces
#include<iostream>
using namespace std;
namespace mys1
{

    void show(int a)
    {
        cout << "a of ms1 = " << a << endl;
    }
}
namespace mys2
{
    void show(double b)
    {
        cout << "a of ms2 = " << a << endl;
    }
}
int main()
{
    int a = 34;
    double b = 45;
    mys1::show(a);
    mys2::show(b);
    return 0;
}