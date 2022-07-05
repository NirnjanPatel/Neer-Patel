// Copy Constructor(shallow copy)
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Demo
{
private:
    int rno, count = 0;
    double per;
    char name[34];

public:
    Demo(char name[], int rno, double per)
    {
        count++;
        this->rno = rno;
        this->per = per;
        strcpy(this->name, name);
        cout << "----Parameterized Constructor Called----\n";
    }
    ~Demo()
    {
        cout << "object deleted :" << count;
        count--;
    }

    void display()
    {
        cout << "Roll No = " << rno << endl;
        cout << "Percentage = " << per << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    int rno;
    double per;
    char name[34];
    cout << "Enter Roll No.: ";
    cin >> rno;
    cout << "Enter Percentage : ";
    cin >> per;
    cout << "Enter Name: ";
    getchar();
    cin.getline(name, 123);

    Demo obj(name, rno, per);
    obj.display();

    Demo obj1(obj);
    obj1.display();

    // or we can write it as this
    cout << "Again Creating an another object\n";
    Demo obj2(obj);
    obj2.display();
    return 0;
}
