// Hirarchical Inheritance
#include <iostream>
using namespace std;
class Parent
{
public:
    void Show()
    {
        cout << "----Show Method called of Parent CLass----" << endl;
    }
};
class Child1 : public Parent
{
public:
    void Display()
    {
        cout << "----Display Method called of Child1 CLass----" << endl;
    }
};
class Child2 : public Parent
{
public:
    void Draw()
    {
        cout << "----Draw Method called of Child2 CLass----" << endl;
    }
};

int main()
{
    Child1 c1;
    Child2 c2;

    c1.Show();
    c1.Display();
    c2.Show();
    c2.Draw();
}