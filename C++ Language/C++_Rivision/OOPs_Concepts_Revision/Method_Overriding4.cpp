// Method_Overriding4
#include <iostream>
using namespace std;
class RBI
{
    public:
    double Rate()
{
        return 1;
}
};

class BOI : public RBI
{
public:
double Rate()
{
    return 2;
}
};

class PNB : public RBI
{
public:
double Rate()
{
    return 3;
}
};

class SBI : public RBI
{
public:
double Rate()
{
    return 4;
}
};

class BOB : public RBI
{
public:
double Rate(){}
};

    int main()
{
    RBI r;
    BOI b;
    PNB p;
    SBI s;
    BOB bb;
    cout << "Rate of RBI = " << r.Rate() << endl;
    cout << "Rate of BOI = " << b.Rate() << endl;
    cout << "Rate of PNB = " << p.Rate() << endl;
    cout << "Rate of SBI = " << s.Rate() << endl;
    cout << "Rate of BOB = " << bb.Rate() << endl;
    return 0;
}