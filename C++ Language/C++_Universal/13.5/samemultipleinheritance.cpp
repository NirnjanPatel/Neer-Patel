// Concept of multiple inheritance in
// one parent class and same name child class and method
#include <iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "Parent" << endl;
    }
    void show()
    {
        cout << "----Show Method of constructor A is called----" << endl;
    }
};
class Child
{
public:
    Child()
    {
        cout << "Child" << endl;
    }
};
int main()
{
}