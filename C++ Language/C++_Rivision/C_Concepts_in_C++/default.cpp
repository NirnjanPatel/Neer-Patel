#include<iostream>
using namespace std;
class Default
{
    public:
    void sum(int a, int b, int c=0, int d=0)
    {
     cout<<"sum = "<<a+b+c+d<<endl;

    }
};
int main()
{
    Default ob;
    ob.sum(2,3);
    ob.sum(1,2,3,4);    
    return 0;
}