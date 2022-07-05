/*
2. Multiple_Ineheritance
Def. We can inherit 2 parent classes by one child class  
*/
#include <iostream>
using namespace std;
class Dim1
{
protected:
    int l, b;
    public:

int Get_Area()
{
    return l * b;
}
};
class Dim2 
{
 protected:
     int h;
     public:

};
class Volume : public Dim1,public Dim2
{
    public:
void Set_Data(int l,int b,int h)
{
    this->l = l;
    this->b = b;
    this->h = h;
}
int Get_Volumn()
{
    return Get_Area() * h;
}
};

int main()
{
    int l, b, h;
    cout<<"Enter l , b & h : ";
    cin >> l >> b >> h;
    Volume obj;
    obj.Set_Data(l,b,h);

    cout << "Area of rectangle = " << obj.Get_Area() << endl;
    cout << "Volumn of rectangle = " << obj.Get_Volumn() << endl;
    return 0;
}