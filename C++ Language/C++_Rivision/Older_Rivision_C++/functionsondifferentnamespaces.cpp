// We can use functions of different  namespaces
#include <iostream>
using namespace std;
namespace ms1
{
    int a;
    void show()
    {
        cout << "Enter  a = ";
        cin >> a;
        cout << "a of ms1 = " << a << endl;
    }
}
namespace ms2
{
    int a = 91;
    double b;
    int show()
    {
        cout << "Enter b = ";
        cin >> b;
        cout << "a of ms2 = " << a << endl;
        cout << "b of ms2 = " << b << endl;
        return a + b;
    }
}
int main()
{
    ms1 ::show();
    ms2::show();
    int c = ms2::show();
    cout << "Sum = " << c << endl;
}