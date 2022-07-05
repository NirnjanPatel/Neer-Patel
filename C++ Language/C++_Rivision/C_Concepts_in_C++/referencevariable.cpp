#include<iostream>
using namespace std;
int main()
{
    int a = 43;
    int &ref=a;
    cout << "a = " << a << endl;
    cout << "a = " << &a << endl;
    cout << "refrence of a = " << ref << endl;
    cout << "refrence of a = " << &ref << endl;
    return 0;
}