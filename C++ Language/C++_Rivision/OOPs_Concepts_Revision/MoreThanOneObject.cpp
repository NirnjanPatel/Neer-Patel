// // Default Constructor (MORE THAN ONE OBJECTS OF ONE CLASS)
#include <iostream>
using namespace std;
class Constructor
{
public:
    Constructor()
    {
        cout << "Default Constructor Called.....!!!!" << endl;
    }
};
int main()
{
    Constructor obj;
    Constructor obj1;
    Constructor obj2;
    Constructor obj3;
    // THan constructor will be called that times.
    return 0;
}