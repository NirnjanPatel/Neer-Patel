// Using different data types in mix form in function overloading
#include <iostream>
using namespace std;
class Mixdatatypes
{
public:
    void greaterinab(int a, double b)
    {
        double res = (a > b) ? a : b;
        cout << "Greater in a & b = " << res << endl;
    }
    void greaterinabc(int a, double b, double c)
    {
        // int res = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        double res = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        // will not calculate digits after decimal points
        // Becoz of int data type
        cout << "Greater in a , b & c = " << res << endl;
    }
};
int main()
{
    Mixdatatypes obj;
    obj.greaterinab(12.34, 543.645654);
    obj.greaterinabc(42.34, 42.33, 42.35);
}