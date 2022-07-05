// printing a string in c++
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Name : " << name << endl;
    cout << "Size of string : " << sizeof(string) << endl;
    return 0;
}