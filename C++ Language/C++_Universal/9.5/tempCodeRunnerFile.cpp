// Constructor Overloading
#include <iostream>
using namespace std;
class Greater
{
public:
    Greater(int a, double b)
    {
        double res = a > b ? a : b;
        cout << "Greater = " << res << endl;
    }
    Greater(double a, int b)
    {
        double res = a > b ? a : b;
        cout << "Greater = " << res << endl;
    }
};
int main()
{
    Greater obj(12, 32.32), obj1(23.32, 34);
    return 0;
}