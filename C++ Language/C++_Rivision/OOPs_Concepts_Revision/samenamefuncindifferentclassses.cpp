// Same name functions in different classses
#include <iostream>
using namespace std;
class Demo1
{
    public:
    void Display()
    {
        cout << "Class Demo1's Display Method Called....!!!!!!" << endl;
    }
};
class Demo2
{
    public:
    void Display()
    {
        cout << "Class Demo2's Display Method Called....!!!!!!" << endl;
    }
};
int main()
{
    Demo1 obj1;
    Demo2 obj2;
    obj1.Display();
    obj2.Display();
    return 0;
}