// concept of parameterized constructor
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Demo
{
private:
    int rno;
    double per;
    char name[34];

public:
    Demo(char name[], int rno, double per) // Parameterised Constructor
    {
        this->rno = rno; // Set values from public to private
        this->per = per;
        strcpy(this->name, name); // For set string name to print name
        cout << "Parameterized constructor Called\n";
    }
    void display()
    {
        cout << "Roll NO.= " << rno << endl;
        cout << "Percentage = " << per << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    int rno;
    double per;
    char name[34];
    cout << "Enter Roll No. : ";
    cin >> rno;
    cout << "Enter Percentage : ";
    cin >> per;
    getchar(); // For get value from user of last or string
    cout << "Enter Name : ";
    cin.getline(name, 45);
    Demo obj(name, rno, per); // passing values to Demo Cinstructor
    obj.display();
    return 0;
}

// // concept of parameterized constructor
// #include <iostream>
// #include <stdio.h>
// #include <string.h>
// using namespace std;
// class Demo
// {
// private:
//     int rno;
//     double per;
//     char name[435];

// public:
//     Demo(char name[], double rno, double per)
//     {
//         this->rno = rno;
//         this->per = per;
//         strcpy(this->name, name);
//         cout << "----------Parameterized Constructor called--------\n";
//     }
//     void display()
//     {
//         cout << "Roll No = " << rno << endl;
//         cout << "Percentage = " << per << endl;
//         cout << "Name = " << name << endl;
//     }
// };
// int main()
// {
//     int rno;
//     double per;
//     char name[342];
//     cout << "Enter Roll no : ";
//     cin >> rno;
//     cout << "Enter Percentage : ";
//     cin >> per;
//     getchar();
//     cout << "Enter Name : ";
//     cin.getline(name, 456);
//     Demo obj(name, rno, per);
//     obj.display();
//     return 0;
// }