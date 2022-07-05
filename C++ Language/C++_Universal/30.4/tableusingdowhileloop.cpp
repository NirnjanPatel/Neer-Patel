// Table using do while loop
#include <iostream>
using namespace std;
int main()
{
    int i = 1, num;
    cout << "Enter a no : ";
    cin >> num;
    do
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }

    while (i <= 10);
}