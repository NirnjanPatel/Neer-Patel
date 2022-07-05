#include <iostream>
using namespace std;
int main()
{
    int i = 1, num = 10;
    switch (i)
    {
    default:
        cout << "Number = " << num << endl;
    case 5:
        cout << "Number = " << num << endl;
    case -6:
        cout << "Number = " << num << endl;
    case 1:
        num++;
        cout << "Number = " << num++ << endl;
        cout << "Number = " << num++ << endl;
        break;
    }
}