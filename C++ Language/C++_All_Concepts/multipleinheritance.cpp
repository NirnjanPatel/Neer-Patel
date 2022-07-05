// Multiple inheritance - more than one parent class
// and only single child class
#include <iostream>
using namespace std;
class Dim1
{
protected:
    int l, b;

public:
};
class Dim2
{
protected:
    int h;

public:
};

class Volume : public Dim1, public Dim2
{
};
int main()
{
    int l, b, h;
    cout << "Enter l , b & h : ";
    cin >> l >> b >> h;
    Volume obj;
}