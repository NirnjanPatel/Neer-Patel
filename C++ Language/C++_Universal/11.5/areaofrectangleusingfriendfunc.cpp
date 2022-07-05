// Problem in this program
// area of rectangle using friend function
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l, b;

public:
    void setData(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    friend void display(Rectangle rec);
    friend int area(Rectangle rec);
};
void display(Rectangle rec)
{
    cout << "l : " << rec.l << endl;
    cout << "b : " << rec.b << endl;
}
int area(Rectangle rec)
{
    return rec.l * rec.b;
}
int main()
{
    int l, b;
    Rectangle rec;
    cout << "Enter l and b : ";
    cin >> l >> b;
    rec.setData(l, b);
    display(rec);
    cout << "Area = " << area(rec) << endl;
}