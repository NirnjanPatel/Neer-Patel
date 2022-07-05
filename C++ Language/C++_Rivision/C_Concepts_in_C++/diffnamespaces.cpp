// Using different namespaces
#include<iostream>
using namespace std;
namespace Myspace1
{
    int a = 34;
}
namespace Myspace2
{
    int b = 33;
}
int main()
{
    using namespace Myspace1;
    
    cout << "a of myspace1 = " << a << endl;
    using namespace Myspace2;
    cout << "a of myspace2 = " << b << endl;
    return 0;
}