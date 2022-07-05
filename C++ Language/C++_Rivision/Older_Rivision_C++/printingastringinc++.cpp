// printing a string in c++
#include <iostream>
using namespace std;
int main()
{
    char name[100];
    cout << "Enter your name : ";
    cin.getline(name, 34);
    cout << "Name : " << name << endl;
    // cout << "Size of string : " << sizeof(char name) << endl;
    return 0;
}