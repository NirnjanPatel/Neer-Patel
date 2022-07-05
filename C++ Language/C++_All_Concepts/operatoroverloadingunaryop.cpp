// operator overloading (unary operator)
#include <iostream>
using namespace std;
class Demo
{
private:
    int num;

public:
    Demo()
    {
        cout << "Enter Num. : ";
        cin >> num;
    }
    void display()
    {
        cout << "Num = " << num << endl;
    }
    void operator++()
    {
        num *= 1000;
    }
};
int main()
{
    Demo obj;
    obj.display();
    ++obj;
    cout << "After Overloading :\n";
    obj.display();
}