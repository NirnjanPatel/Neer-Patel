#include <iostream>
using namespace std;
int main()
{
    char s1[30];
    cout << "Enter your name = ";
    cin.getline(s1, 40);
    cout << "\nWelcome " << s1;
}