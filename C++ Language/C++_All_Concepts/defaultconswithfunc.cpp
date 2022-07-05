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
        int rno = 344353545;
        double per = 83.60;
        char name[34] = "Niranjan Patel";

        cout << "Roll No. = " << rno << endl;
        cout << "Percentage = " << per << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    Demo obj;
    return 0;
}
