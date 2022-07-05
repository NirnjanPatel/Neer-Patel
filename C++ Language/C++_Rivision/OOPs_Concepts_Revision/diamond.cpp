#include<iostream>
using namespace std;

class A
{
    protected:
        int a, b;
        public:
        void set()
        {
            cout << "Enter the value of a and b :";
            cin >> a >> b;
        }
};
class B:virtual public A
{
    protected:
    int c;
public:
    void sum()
    {
    c = a + b;
    cout << "sum :" << c<<endl;
    }
};
class C:virtual public A
{
    protected:
    int d;
public:
    void mul()
    {
        d = a * b;
        cout << "product = " << d << endl;
    }
};
class D : public B,public C
{
    double e;
public:
    void devide()
    {
        e = d / c;
        cout << "Devide = " << e << endl;
    }
};
int main()
{
   
    D ob;
    ob.set();
    ob.sum();
    ob.mul();
    ob.devide();
    return 0;
}