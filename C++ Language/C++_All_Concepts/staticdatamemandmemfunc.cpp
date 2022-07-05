// Static Data Member And Static Member Function
// it makes constant to following data member  & Member Function
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int rno;
    double per;
     static char name[23];

public:
    Student(char *name,int rno, double per)
    {
        this->per = per;
        this->rno = rno;
        strcpy(this->name, name);
    }
    void display()
    {
        cout << "Name = "<<name<<"\t" << rno << "\t" << per << "\t" << endl;
    }
};
char Student::name[] = "ABC College , Indore";
int main()
{
     char name1[45]="Neer";
     char name2[45]="Niraj";

    Student s1(name1,34, 34.2), s2(  name2,343, 35.4);
    s1.display();
    s2.display();
}