// Error in this program
// Using different data types in mix form in function overloading
#include <iostream>
using namespace std;
class Mixdatatypes
{
public:
    int greaterinab1(int a, double b)
    {
        double res = (a > b) ? a : b;
        cout << "Greater in a & b = " << res << endl;
        return res;
    }
    int greaterinab2(int a, double b)
    {
        double res = (a > b) ? a : b;
        cout << "Greater in a & b = " << res << endl;
        return res;
    }
};
int main()
{
    Mixdatatypes obj;
    obj.greaterinab1(12.34, 543.645654);
    obj.greaterinab2(34.34, 43.645654);
    cout << "Greater in first = " << obj.greaterinab1() << endl;
    cout << "Greater in first = " << obj.greaterinab2() << endl;
}