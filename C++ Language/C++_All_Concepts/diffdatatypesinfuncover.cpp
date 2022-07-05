// Using different data types in function overloading
#include <iostream>
using namespace std;
class GreaterindiffDT
{
public:
    void greaterab(int a, int b)
    {
        int res = (a > b) ? a : b;
        cout << "Greater in a & b = " << res << endl;
    }
    void greaterinabc(double a, double b, double c)
    {
        double res = (a > b) ? (b > c ? a : b) : (c > b ? c : b);
        cout << "Greater in a , b & c = " << res << endl;
    }
};
int main()
{
    GreaterindiffDT obj;
    obj.greaterab(23, 45);
    obj.greaterinabc(1.97, 1.98, 1.99);
}