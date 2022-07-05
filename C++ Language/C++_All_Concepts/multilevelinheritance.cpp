// Multi level inheritance
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
protected:
    int h;

public:
    int getVolume()
    {
        return getArea() * h;
    }
};
class Density : public Volume
{
private:
    double m;

public:
    void setData(int l, int b, int h, double m)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        this->m = m;
    }
    int getMass()
    {
        return getVolume() / m;
        // return l * b * h / m;
    }
};
int main()
{
    int l, b, h;
    double m;
    cout << "Enter l , b , h & m : ";
    cin >> l >> b >> h >> m;
    Density obj;
    obj.setData(l, b, h, m);
    cout << "Area = " << obj.getArea() << endl;
    cout << "Volume = " << obj.getVolume() << endl;
    cout << "Mass = " << obj.getMass() << endl;
}