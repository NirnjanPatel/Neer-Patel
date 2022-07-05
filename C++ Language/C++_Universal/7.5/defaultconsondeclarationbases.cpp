// Default Cons. on declaration bases
#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
private:
    int rno;
    float per;
    char name[56];

public:
    Demo()
    {
        rno = 3432442;
        per = 45.45;
        strcpy(name, "Andrew Anderson");
    }
    void DisplayDetails()
    {
        cout << "Roll No. = " << rno << endl;
        cout << "Percentage = " << per << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    Demo obj;
    obj.DisplayDetails();
    return 0;
}