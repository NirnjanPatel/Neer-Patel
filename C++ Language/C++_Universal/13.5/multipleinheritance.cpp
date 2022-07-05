// Multiple inheritance in same name
#include <iostream>
using namespace std;
class A
{
public:
    void Show()
    {
        cout << "----Show method of A called---!!!----" << endl;
    }
};
class B
{
public:
    void Show()
    {
        cout << "Show method of B called---!!!" << endl;
    }
};
class D : public A, public B
{
public:
    void Display()
    {
        cout << "Show method of C called---!!!" << endl;
    }
};
int main()
{
    D obj;
    obj.Display();
    obj.A::Show();
    // Here if we call only by function name than
    // it will give us ambioguish error
    obj.B::Show();
}