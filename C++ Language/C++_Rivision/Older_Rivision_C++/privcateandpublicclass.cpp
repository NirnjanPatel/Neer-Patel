// Showing concept of class and object with private and public
#include <iostream>
using namespace std;
class myName
{
private:
    void name()
    {
        cout << "My name is Niranjan " << endl;
    }

public:
    void sirName()
    {
        cout << "My Sir name is Khati Patel " << endl;
        name();
    }
};

int main()
{
    myName enter;
    enter.sirName();
}
