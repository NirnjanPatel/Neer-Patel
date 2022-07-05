// // values from user  staticdatamemandmemfunc.cpp

// // values from user  staticdatamemandmemfunc.cpp
// #include <iostream>
// using namespace std;
// class Student
// {
// private:
//     int rno;
//     double per;
//     static char cname[23];

// public:
//     Student(int rno, double per)
//     {
//         this->rno = rno;
//         this->per = per;
//     }
//     void display()
//     {
//         cout << "\t" << rno << "\t" << per << "\t" << endl;
//     }
//     static void getCollegeName()
//     {
//         cout << "Enter College Name : ";
//         cin.get(cname, 23);
//     }
// };
// char Student ::cname[];
// int main()
// {
//     Student::getCollegeName();
//     Student s1(12, 23.23), s2(23, 34.3);
//     s1.display();
//     s2.display();
// }