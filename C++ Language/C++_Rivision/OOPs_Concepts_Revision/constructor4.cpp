// Constructor with local variables and function
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Demo
{
private:
    int rno;
    char name[34];
    double per;

public:
    Demo()
    {
        // name[23] = {"Neer"};
        // We can't use this to get name of array type so we will use
        // strcpy(name, "Need", " PAtel"); // or we can use
        rno = 283746;
        per = 86;
        // strcpy(name, "Niranjan", " Malviya"); // Can't be used
        cout << "Enter Name : ";
        getwchar();
        cin.getline(name, 43);

        cout << "Default Constructor Called....!!!!" << endl;
        cout << "Here Properties of constructor are all called....!!!!" << endl;
    }
    void Display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No. = " << rno << endl;
        cout << "Percentages = " << per << endl;
    }
};
int main()
{

    Demo re;
    // Demo re1;
    // Here Properties of constructor are all called....!!!!
    re.Display();
    return 0;
}