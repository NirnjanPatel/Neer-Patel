// Copy Constructor (Deep Constructor)
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Demo
{
private:
private:
    int rno;
    double per;
    char name[34];

public:
    Demo(char name[], int rno, double per)
    {
        strcpy(this->name, name);
        this->per = per;
        this->rno = rno;
        cout << "----Parameterized Constructor Called----\n";
    }
    void display()
    {
        cout << "Roll No = " << rno << endl;
        cout << "Percentage = " << per << endl;
        cout << "Name = " << name << endl;
    }
    Demo(const Demo &obj)
    {
        rno = obj.rno;
        per = obj.per;
        strcpy(name, obj.name);
    }
};
int main()
{
    int rno;
    double per;
    char name[34];
    cout << "Enter Roll no : ";
    cin >> rno;
    cout << "Enter Percentage : ";
    cin >> per;
    cout << "Enter Name : ";
    getchar();
    cin.getline(name, 23);
    Demo obj(name, rno, per);
    Demo obj1(obj);
    obj.display();
    // Demo obj1(obj);
    // obj1.display();
}