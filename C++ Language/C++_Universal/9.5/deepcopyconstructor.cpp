// Deep Copy Constructor
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Demo
{
private:
    int rno;
    double per;
    char name[45];

public:
    Demo(char name[], int rno, double per)
    {
        this->rno = rno;
        this->per = per;
        strcpy(this->name, name);
        cout << "----Constructor Called----\n";
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
    char name[45];
    cout << "Enter Roll No. : ";
    cin >> rno;
    cout << "Enter Percentage : ";
    cin >> per;
    cout << "Enter Name : ";
    getchar();
    cin.getline(name, 45);
    Demo obj(name, rno, per), obj1(obj);
    obj.display();
}