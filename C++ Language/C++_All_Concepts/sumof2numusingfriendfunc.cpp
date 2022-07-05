// Sum of 2 num using friend function
#include <iostream>
using namespace std;
class Sum
{
private:
    int num;

public:
    Sum()
    {
        cout << "Enter Number : ";
        cin >> num;
    }
    friend void getSum(Sum s1, Sum s2);
};
void getSum(Sum s1, Sum s2)
{
    cout << "Sum = " << s1.num + s2.num << endl;
}
int main()
{
    Sum s1, s2;
    getSum(s1, s2);
}