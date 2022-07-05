/* 
4. Hybrid_Inheritance
Def - It is a combination of multiple and all other iinheritance types
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Student
{
protected:
    int rno;
    double per;
    char name[34];
};
class Marks : public Student
{
protected:
    int p, c, m;
    int Sub_Total;
};
class Sessional : public Marks
{
protected:
    int in, ex;
    int Sessional_Total;
    int Total;
};
class Result : public Sessional
{
    public:
    void Set_Data(int rno,int p,int c,int m,int in ,int ex,char name[])
    {
        this->rno = rno;
        strcpy(this->name, name);
        this->p = p;
        this->c = c;
        this->m = m;
        this->in = in;
        this->ex = ex;
        // this->Sub_Total = Sub_Total;
        // this->Total = Total;

    }
    void Display_Student_Details()
    {
        int Sub_Total = p + c + m;
        int Sessional_Total = in + ex;
        int Total = Sub_Total + Sessional_Total;
        double Per = Total / 5.2; // mistake in percentages
        // this->per = per;
        this->Sessional_Total = Sessional_Total;

        cout << "Student Details.......!!!!!!!!!" << endl;
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rno << endl;
        cout << "Sub_Total = " << Sub_Total << endl;
        cout << "Sessional_Total = " << Sessional_Total << endl;
        cout << "Total = " << Total << endl;
        cout << "Percentages = " << per << endl;
    }
    void Display_Student_Details1()
    {
        
    }
};
int main()
{
    int rno, p, c, m, in, ex;
    char name[23];
    cout << "Enter Roll No.:";
    cin >> rno;
    cout << "Enter p , c & m Marks : ";
    cin >> p >> c >> m;
    cout << "Enter in & ex Marks : ";
    cin >> in >> ex;
    getchar();
    cout << "Enter NAme : ";
    cin.getline(name, 45);

    Result obj;
    obj.Set_Data(rno,p,c,m,in,ex,name);
    obj.Display_Student_Details();
    return 0;
}