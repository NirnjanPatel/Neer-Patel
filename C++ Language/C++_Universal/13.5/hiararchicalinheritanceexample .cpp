// Hiararchical Inheritance Example
#include <iostream>
using namespace std;
class Parent
{
public:
    void Shape()
    {
        cout << "---Shape---!!!" << endl;
    }
};
class Circle : public Parent
{
public:
    void Shape()
    {
        cout << "Circle---Shape---!!!" << endl;
    }
};
class Rectangle : public Parent
{
public:
    void Shape()
    {
        cout << "Rectangle---Shape---!!!" << endl;
    }
};
class Square : public Parent
{
public:
    void Shape(){};
};

int main()
{
}