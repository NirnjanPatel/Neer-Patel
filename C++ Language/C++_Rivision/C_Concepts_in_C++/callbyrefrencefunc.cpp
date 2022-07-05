// Call by refrence
#include<iostream>
using namespace std;
int swap(int a , int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swap : " << endl;
    cout << "a = " << a <<"\n"<< "b = " << b << endl;
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;
    cout << "Before Swap : " << endl;
    cout << "a = " << a<<"\n" << "b = " << b << endl;   
    swap(a, b);
    int sum = swap(a, b);
    cout << "Sum = " << sum << endl;
    return 0;
}