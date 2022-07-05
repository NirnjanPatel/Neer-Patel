// Constructor with local variables and function
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Demo
{
private:
    int rno;
    char name[53];
    double per;

public:
    Demo()
    {
        rno = 283746;
        // name[23] = {"Neer"};
        // We can't use this to get name of array type so we will use
        // strcpy(name, "Niranjan Mlaviya");
        // Getting error here yaar....!!!!
        cin.getline(name, 98);
        per = 83;
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
    Demo Result;
    // Here Properties of constructor are all called....!!!!
    Result.Display();
    return 0;
}