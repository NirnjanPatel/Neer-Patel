// Concept of passing object in a function and returning object
// from a function using friend function
#include <iostream>
using namespace std;
class Distance
{
private:
    int km, m;

public:
    void setDistance(int km, int m)
    {
        this->km = km;
        this->m = m;
    }
    void Display()
    {
        cout << "\t" << km << "\t" << m << endl;
    }
    friend Distance addDistance(Distance d1, Distance d2);
};
Distance addDistance(Distance d1, Distance d2)
{
    Distance obj;
    obj.km = d1.km + d2.km;
    obj.m = d1.m + d2.m;
    while (obj.m >= 1000)
    {
        obj.m -= 1000;
        obj.km += 1;
    }
    return obj;
}
int main()
{
    Distance d1, d2, d3;
    int km1, m1, km2, m2;

    cout << "Enter km1 & m1 : ";
    cin >> km1 >> m1;
    cout << "Enter km2 & m2 : ";
    cin >> km2 >> m2;

    d1.setDistance(km1, m1);
    d2.setDistance(km2, m2);

    cout << "\n-------------------------------" << endl;
    cout << "\tkm   \tm\t" << endl;
    cout << "-------------------------------" << endl;

    d1.Display();
    cout << "\t" << endl;
    d2.Display();

    cout << "-------------------------------" << endl;
    d3 = addDistance(d1, d2);
    cout << "-------------------------------" << endl;
    d3.Display();
    return 0;
}