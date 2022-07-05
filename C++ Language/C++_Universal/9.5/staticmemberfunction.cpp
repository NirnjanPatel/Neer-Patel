// Static member function
#include <iostream>
using namespace std;
class Demo
{
private:
    static int count;

public:
    Demo()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int Demo::count = 0;
int main()
{
    Demo d1, d2, d3, d4, d5;
    cout << "No. of object created : " << Demo::getCount() << endl;
}