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
    cout << "Show method called" << endl;
}
void Demo::display()
{
    cout << "Display method called" << endl;
}
int main()
{
    Demo obj;
    obj.show();
    obj.display();
}