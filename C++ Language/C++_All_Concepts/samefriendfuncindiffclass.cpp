// same Friend function in different Classes
#include <iostream>
using namespace std;
class B;
class A
{
public:
    int num;

public:
    A()
    {
        cout << "Enter no . : ";
        cin >> num;
    }
    friend void getSum(A s1, B s2);
};
class B
{
public:
    int num;
    B()
    {
        cout << "Enter no . : ";
        cin >> num;
    }
    friend void getSum(A s1, B s2);
};
void getSum(A s1, B s2)
{
    cout << "Sum = " << s1.num + s2.num << endl;
}
int main()
{
    A s1;
    B s2;
    getSum(s1, s2);
}