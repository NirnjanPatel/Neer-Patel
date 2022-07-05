// String
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name = ";
    getline(cin, name);
    cout << "Welcome \n"
         << name << endl;
}