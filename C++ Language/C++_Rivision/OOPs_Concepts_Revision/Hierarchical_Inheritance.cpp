/* 
5. Hierarchical_Inheritance
Def - Single parent class & more than one child classes
*/
#include <iostream>
using namespace std;
class Parent
{
   public:
void Show()
{
 
   cout << "Show Method Called of Parent class called....!!! "<<endl;
}
};
class Child1 : public Parent
{
    public:
void Display_Child1() 
{
    cout << "Display_Child1 Method Called of Child1 class called....!!! "<<endl;
}
};
class Child2 : public Parent
{
    public:
 void Display_Child2()
{
    cout << "Display_Child2 Method Called of Child2 class called....!!! "<<endl;
}   
};
int main()
{
    Parent pobj;
    Child1 c1;
    c1.Display_Child1();
    Child2 c2;
    c2.Display_Child2();
    pobj.Show();

    c1.Show();
    c2.Show();
    return 0;
}