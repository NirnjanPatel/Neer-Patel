// staticdatamember.cpp
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
        cout << "Total No of objects : " << Demo::count << endl;
    }
};
int Demo ::count = 0;
int main()
{
    Demo d1, d2, d3, d4, d5;
}