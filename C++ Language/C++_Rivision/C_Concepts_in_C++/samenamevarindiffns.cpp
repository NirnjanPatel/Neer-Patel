#include<iostream>
using namespace std;
namespace mys1
{
    int a = 12;
}
namespace mys2
{
   int a = 120;
}
int main()
{
    // using namespace mys1;
    // using namespace mys2; This is wrong trick to get values of same name variables
    cout<< "a of mys1 = " << mys1::a << endl;
    cout<< "a of mys2 = " << mys2::a << endl;
    return 0;
}