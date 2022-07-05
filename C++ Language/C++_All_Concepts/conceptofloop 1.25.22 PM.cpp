// Concepts of Loop
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
        ; // ; means loop will run under that condition and
          //    exit with false value
    cout << "i : " << i << endl;
    for (i = 1; i <= 10; i++)
        cout << "i : " << i << endl;
}