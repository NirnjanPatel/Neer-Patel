// Table using while loop
#include <iostream>
using namespace std;
int main()
{
    int i, num;
    cout << "Enter a no. : ";
    cin >> num;
    i = 1;
    while (i <= 20)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
}
