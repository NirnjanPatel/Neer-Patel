#include<iostream>
using namespace std;
int main()
{
    int num,i=10;
    cout << "Enter a number : ";
    cin >> num;
    while(i>=1)
    {
        cout << num << " * " << i << " = " << num * i << endl;
        i--;
    }
    return 0;
}