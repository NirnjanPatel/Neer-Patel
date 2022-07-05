// Method overloading with conditional statement
// Concept of method or function overloading
// Using control or conditional statements
#include <iostream>
using namespace std;
class Greaterinfunc
{
public:
    void greaterinab(int a, int b)
    {
        int res = a > b ? a : b;
        cout << "Greater in a & b = " << res << endl;
    }
    void greaterinabc(int a, int b, int c)
    {
        int res = (a > b) ? (a > c ? a : b) : (c > b) ? c
                                                      : b;
        cout << "Greater in a , b & c = " << res << endl;
    }
};

int main()
{
    Greaterinfunc obj;
    obj.greaterinab(21, 45);
    obj.greaterinabc(21, 45, 67);
}