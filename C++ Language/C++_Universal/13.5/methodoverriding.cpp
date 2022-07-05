// Error in pnb return value
// Run time polymerphism - Method Overriding - Same name
#include <iostream>
using namespace std;
class RBI
{
public:
    // Can never be protected
    double Rate()
    {
        return 1.0;
    }
};
class BOI : public RBI
{
public:
    double Rate()
    {
        return 2.0;
    }
};
class BOB : public RBI
{
public:
    double Rate()
    {
        return 3.0;
    }
};
class PNB : public RBI
{
};
int main()
{
    BOI boi;
    BOB bob;
    PNB pnb;

    cout << "Rate of BOI : " << boi.Rate() << endl;
    cout << "Rate of BOB : " << bob.Rate() << endl;
    cout << "Rate of PNB : " << pnb.Rate() << endl;
}
