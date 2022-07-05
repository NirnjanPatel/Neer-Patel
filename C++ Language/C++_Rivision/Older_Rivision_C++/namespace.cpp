// COncept of namespace
#include <iostream>
using namespace std;
namespace myspace1
{
    int a = 100;
}
namespace myspace2
{
    int a = 200;
}
using namespace myspace1;
// using namespace myspace2;

int main()
{
    cout << "myspace 1 ::a = " << a << endl;
    cout << "Myspace2 a = " << myspace2 ::a << endl;
    // using namespace myspace2;

    // cout << "myspace 2::a = " << a << endl;

    return 0;
}