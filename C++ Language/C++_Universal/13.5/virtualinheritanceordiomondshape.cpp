// Diomond Shape ambiguity & virtual base class
// or..  virtual inheritance
#include <iostream>
using namespace std;
class A
{
public:
    void Show()
    {
        cout << "---Show method called of parent class by Virtual class---" << endl;
    }
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public A
{
};
int main()
{
    D obj;
    obj.Show();
}