// Getting Error in this program
// If we want to get values from user's  
#include<iostream>
#include<stdio.h>
using namespace std;
class StudentDetails
{
    private:
    int rno;
    char name[45];
    double per;
    public:
   void GetStudentDetails()
    {
        cout << "Enter Roll No.:";
        cin >> rno;
        cout << "Enter Percentages : ";
        cin >> per;
        getchar(); // To hold screen (input)
        cout << "Enter Name : ";
        cin.getline(name, 34);
    }
    void DisplayDetails()
    {
        cout << "Roll No = " << rno << endl;
        cout << "Percentages = " << per << endl;
        cout << "Name = " << name << endl;
    }
};
int main()
{
    int i, num;
    cout << "Enter No. of students which you want to input/get details : ";
    cin >> num;
    StudentDetails Show[34];

    for (i = 0; i < num;i++)
    {
        cout << "Enter " << i + 1 << " Student Details...!!!" << endl;
        Show[i].GetStudentDetails();
    }
 for (i = 0; i < num;i++)
 {
    cout <<i+1<< " Student Details.......!!!!" << endl;
    Show[i].DisplayDetails();
 }
        return 0;
}