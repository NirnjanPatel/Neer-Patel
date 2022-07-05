// Static Data Member
#include <iostream>
using namespace std;
class Demo
{
public:
    static int count;
    Demo()
    {
        count++;
    }
};
int Demo::count = 0;
int main()
{
    Demo d1, d2, d3, d4, d5;
    cout << "Total No. of object created : " << Demo::count << endl;
}