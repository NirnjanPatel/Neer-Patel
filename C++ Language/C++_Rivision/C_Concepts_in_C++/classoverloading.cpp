// CLass Overloading
#include<iostream>
using namespace std;
class Overloading
{
    public:
    void sum(int a, int b)
    {
     cout<<"sum = "<<a+b<<endl;
    }
        void sum(int a, double b, int c)
    {
     cout<<"sum = "<<a+b+c<<endl;
    }
        void sum(int a, int b, int c, int d)
    {
     cout<<"sum = "<<a+b+c+d<<endl;
    }
};
int main()
{
    Overloading ob;
    ob.sum(1,2);
    ob.sum(1,2.34,3);
    ob.sum(1,2,3,4.4);    
    return 0;
}