// sum and average of three nos
#include <iostream>
using namespace std;
class Operation
{
private:
    double a, b, c, sum;

public:
    double setData(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    double Sum()
    {
        double sum = a + b + c;
        return sum;
        this->sum = sum;
    }
    double avg()
    {
        double avg = sum / 3.0;
        return avg;
    }
};
int main()
{
    double a, b, c;
    cout << "Enter  a , b & c = ";
    cin >> a >> b >> c;
    Operation obj;
    obj.setData(a, b, c);
    double d = obj.avg();
    cout << "Sum = " << obj.Sum() << endl;
    cout << "avg = " << d << endl;
}