// single inheritance - single parent and single child class
#include <iostream>
using namespace std;
class Area
{
protected:
    int l, b;

public:
    int getArea()
    {
        return l * b;
    }
};
class Volume : public Area
{
private:
    int h;

public:
    void setData(int l, int b, int h)
    {
        this->b = b;
        this->h = h;
        this->l = l;
    }
    int getVolume()
    {
        return getArea() * h;
    }
};
int main()
{
    int l, b, h;
    cout << "Enter l , b & h : ";
    cin >> l >> b >> h;
    Volume obj;
    obj.setData(l, b, h);
    cout << "Area = " << obj.getArea() << endl;
    cout << "Volume = " << obj.getVolume() << endl;
}