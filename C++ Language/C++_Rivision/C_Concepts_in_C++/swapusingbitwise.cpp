#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter a & b : ";
    cin >> a >> b;
    cout<<"Before Swapping : "<<endl;
    cout << "a = " << a<<endl << "b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After Swapping : " << endl;
    cout << "a = " << a <<endl<< "b = " << b << endl;
    return 0;
}