// Method_Overriding in more than one child class
#include<iostream>
using namespace std;
class Parent
{
    public:
    void Shape()
    {
        cout << "Shape of ******************* " << endl;
    }
};
class Circle : public Parent
{
    public:
    void Shape()
    {
        cout << "Circle Shape....!!!" << endl;
    }
};
class Square : public Parent
{
    public:
 void Shape()
 {
    cout << "Square Shape....!!!" << endl;
 }
};
class Rectangle : public Parent
{
    public:
    void Shape(){}
    // Here is void
};
int main()
{
    Parent p;
    Circle c1;
    Square s1;
    Rectangle r1;

    p.Shape();
    c1.Shape();
    s1.Shape();
    r1.Shape();
    r1.Shape();

    return 0;
}