// Scope Resolution Operator
#include <iostream>
using namespace std;
int n = 1000;
int main()
{
    int n = 10;
    cout << "Global Variable n = " << n << endl;
    cout << "Local Variable n = " << n << endl;
    {
        int n = 999;
    }
    cout << "Inner Func. Variable n = " << n << endl;
    cout << "Global Variable n = " << ::n << endl; // accessing global var. with :: operator
}