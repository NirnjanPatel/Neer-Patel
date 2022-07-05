// Same functions in different types of namespaces
#include<iostream>
using namespace std;
namespace mys1
{
    int a = 34;
    void show()
    {
        cout << "a of ms1 = " << a << endl;
    }
}
namespace mys2
{
    double a = 78;
    void show()
    {
        cout << "a of ms2 = " << a << endl;
    }
}
int main()
{
    mys1::show();
    mys2::show();
    return 0;
}