// Passing object in a function
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
    void display()
    {
        cout << "\t" << km << "\t" << m << endl;
    }
    void addDistance(Distance d1, Distance d2)
    {
        km = d1.m + d2.m;
        while (m >= 1000)
        {
            km += 1;
            m -= 1000;
        }
    }
};
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

    cout << "\n----------------------\n";
    cout << "\tkm\tm\n ";
    cout << "------------------------\n";

    d3.addDistance(d1, d2);
    d3.display();
    return 0;
}