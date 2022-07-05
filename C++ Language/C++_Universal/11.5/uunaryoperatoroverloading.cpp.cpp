// unary operator overloading
#include <iostream>
using namespace std;
class Demo
{
private:
    int num;

public:
    Demo()
    {
        cout << "Enter value of num : ";
        cin >> num;
    }
    void display()
    {
        cout << "Number = " << num << endl;
    }
    void operator~()
    {
        num += 100;
    }
};
int main()
{
    Demo obj;
    cout << "Before Overloading :\n";
    obj.display();
    ~obj;
    cout << "After Overloading :\n";
    obj.display();
}