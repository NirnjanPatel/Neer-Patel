#include<iostream>
// #include <stdio.h>
// #include<string.h>
using namespace std;
int main()
{
    string str[]={"Neer"};
    cout << "Enter your name : ";
    // cin.getline(str,34);
    cout << "NAme = " << str << endl;
    cout << "Welcome....,,!!! " << endl<< str << endl;
    cout << "Size of string = " << sizeof(str) << endl;

    cout << "Size = " << str.length() << endl;
    //    char name2[] = "November";
    // printf("Length of String is %lu\n", strlen(name2));
    // printf("Size of String is %lu\n", sizeof(name2));
    // // Error finding size of string
    return 0;
}