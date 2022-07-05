// Method_Overriding
#include<iostream>
using namespace std;
class Parent
{
    public:
    void Show()
    {
        cout << "Show Method of Parent class is called....!!!!" << endl;
    }
};
class Child : public Parent
{
    public:
    void Show()
    {
        cout << "Show Method of Child class is called....!!!!" << endl;    
    }
};
int main()
{
    Parent p1;
    p1.Show();
    Child c1;
    c1.Show();
    return 0;
}