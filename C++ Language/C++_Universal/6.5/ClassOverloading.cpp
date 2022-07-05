// Class Overloading
#include<iostream>
using namespace std;
class Default
{
public:
    void sum(int a, double b)
    {
        cout << "Sum = " << a+b << endl;
    }
     void sum(double a,int b)
    {
        cout << "Sum = " << a+b << endl;
    }
     void sum(char a,char b)
    {
        cout << "Sum = " << a<<"\n"<<b<< endl;
    }
};

int main()
{
    Default ob;
    ob.sum(21,34.34);
    ob.sum(21.21,45);
    ob.sum('s','f');
}