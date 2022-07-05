// Concept of method or function overloading
// Using control or conditional statements
#include <iostream>
using namespace std;
class Greater
{
public:
    void greater(int a, int b)
    {
        int res = a > b ? a : b;
        cout << "Greater = " << res << endl;
    }
    void greater(int a, int b, int c)
    {
        int res = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        cout << "Greater = " << res << endl;
    }
};
int main()
{
    Greater obj;
    int a, b;
    obj.greater(12, 34);
    obj.greater(12, 34, 56);
    return 0;
}