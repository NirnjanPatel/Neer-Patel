// Default Constructor with some variables
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Demo
{
public:
    Demo()
    {
        int rno;
        char name[23];
        double per;

        cout << "Enter Roll No. : ";
        cin >> rno;
        cout << "Enter Percentages : ";
        cin >> per;
        getwchar();
        cout << "Enter Name : ";
        cin.getline(name, 34);
        }
};

int main()
{

    Demo obj;
    return 0;
}