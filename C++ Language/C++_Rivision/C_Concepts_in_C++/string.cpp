// Simple string printing
#include<iostream>
// #include <string.h>
using namespace std;
int main()
{
    char name[34];
    cout << "Enter your name : ";
    cin.getline(name, 34);
    cout << "Name = " << name << endl;
    return 0;
}