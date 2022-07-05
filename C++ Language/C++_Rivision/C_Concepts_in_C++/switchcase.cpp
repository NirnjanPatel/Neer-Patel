#include<iostream>
using namespace std;
int main()
{
    int i = 1,num=10;
switch(i)
{
    case 1:
    cout << num++ << endl;
    cout << num << endl;
    break;
    cout << num << endl;
    case 2:
    cout << ++num << endl;
    case 3:
    cout << ++num << endl;
}
// we can't use 2 switch case statements
int num2 = 34;
switch (num2)
{
    case 10:
    cout << --num2 << endl;
    case 20:
    cout << num2-- << endl;
}
    return 0;
}