/* 
3. Multi_Level_Inheritance
Def - Parent class : Child class : Sub child class  
*/
#include <iostream>
using namespace std;
class Area
{
    protected:
    int l, b;
};
class Volumn : public Area
{
    protected:
    int h;
};
class Density : public Volumn
{
public:
void Set_data(int l, int b, int h)
{
    this->l = l;
    this->b = b;
    this->h = h;
}
};
// class VolumnAndDensity_Sum
// {

// };

int main()
{
    int l, b, h;
    cout << "Enter l , b & h : ";
    cin >> l >> b >> h;

    Density obj;
    obj.Set_data(l, b, h);

    return 0;
}