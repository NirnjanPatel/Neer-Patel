// Scope Resolution Operator
#include <iostream>
using namespace std;
class Demo
{
public:
    void show();
    void display();
};

void Demo::show()
{
    cout << "Show func. called" << endl;
}
void Demo::display()
{
    cout << "Display func. called" << endl;
}
int main()
{
    Demo obj;
    obj.show();
    obj.display();
}