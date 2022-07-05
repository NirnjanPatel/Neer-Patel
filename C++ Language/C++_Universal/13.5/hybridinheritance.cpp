// Concept of hybrid inheritance
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Student
{
protected:
    int rno;
    char name[45];
};
class Marks : public Student
{
protected:
    int p, c, m;
};
class Sessional : public Marks
{
protected:
    int in, ex;
};
class Result : public Sessional
{
public:
    void setData(int p, int c, int m, int in, int ex, int rno, char name[])
    {
        this->rno = rno;
        strcpy(this->name, name);
        this->p = p;
        this->c = c;
        this->m = m;
        this->ex = ex;
        this->in = in;
    }
    void Display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rno << endl;
        cout << "Physics Marks : " << p << endl;
        cout << "Chemistry Marks : " << c << endl;
        cout << "Maths Marks : " << m << endl;
        cout << "Internal Marks : " << in << endl;
        cout << "External Marks : " << ex << endl;
    }
    void Calculate()
    {
        int total = p + c + m + in + ex;
        double per = total / 5.0;
        cout << "Total : " << total << endl;
        cout << "Percentage : " << per << endl;
    }
};
int main()
{
    int rno, p, c, m, in, ex;
    char name[34];
    cout << "Enter Roll No : ";
    cin >> rno;
    getchar();
    cout << "Enter Name : ";
    cin.getline(name, 34);
    cout << "Enter Marks of P , C & M : ";
    cin >> p >> c >> m;
    cout << "Enter Sessional Marks :\n";
    cout << "Internal Marks : ";
    cin >> in;
    cout << "External Marks : ";
    cin >> ex;

    Result obj;
    obj.setData(p, c, m, in, ex, rno, name);

    obj.Calculate();
}
