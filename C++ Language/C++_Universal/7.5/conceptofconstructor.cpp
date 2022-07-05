// Concept of constructor
// Default constructor
#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "----Default Constructor Called----" << endl;
    }
};
int main()
{
    Demo obj;
    return 0;
}