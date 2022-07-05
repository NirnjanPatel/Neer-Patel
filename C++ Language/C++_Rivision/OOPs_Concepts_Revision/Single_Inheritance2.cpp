/*
1. Single_inheritance
Def. Parent class have Only one child class
*/
#include <iostream>
using namespace std;
class AreaOfRectangle
{
    protected:
        int l, b;
        public :
        int Get_Area()
        {
            return l * b;
        }
};
class Volumn : public AreaOfRectangle
{
private:
    int h;
    public:
    void Set_Data(int l,int b,int h)
    {
        this->b=b;
        this->l=l;
        this->h=h;
    }
    int Get_Volumn()
    {
        return Get_Area() * h;
    }
};

int main()
{
    int l, b, h;
    cout << "Enter l , b & h : ";
    cin >> l >> b >> h;
    Volumn obj;
    obj.Set_Data(l,b,h);
    cout << "Area of Rectangle = " << obj.Get_Area() << endl;
    cout << "Volumn = " << obj.Get_Volumn() << endl;
    return 0;
}