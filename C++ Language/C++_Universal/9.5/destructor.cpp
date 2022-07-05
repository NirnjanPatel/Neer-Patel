#include <iostream>
using namespace std;

class A
{

public:
    int count = 0;
    A()
    {
        count++;
        cout << "object created :" << count << endl;
    }
    ~A()
    {
        cout << "object deleted :" << count << endl;
        count--;
    }
};
int main()
{
    A ob, ob1, ob2, ob3;
}