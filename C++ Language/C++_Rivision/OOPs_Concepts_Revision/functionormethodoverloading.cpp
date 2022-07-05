#include <iostream>
using namespace std;
class Greateramong3
{
public:
    double Greater(int a, double b)
    {
        double greater = a > b ? a : b; // Here double greater for store decimal values
                                        // Because int will not store decimal points
        cout << "Greater in a & b = " << greater << endl;
        return greater;
    }
    double Greater(double a, double b, int c)
    {
        double greater = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        // here first check a > b if yes than check a>c
        cout << "Greater in a , b & c = " << greater << endl;

        return greater;
    }
};
int main()
{
    Greateramong3 obj;
    obj.Greater(12, 3.2);
    obj.Greater(2.3432, 34.3, 3);

    // cout << "Greater in a & b = " << obj.Greater() << endl;
    // cout << "Greater in a & b = " << obj.Greater() << endl;
    // Can't call same name method's
}