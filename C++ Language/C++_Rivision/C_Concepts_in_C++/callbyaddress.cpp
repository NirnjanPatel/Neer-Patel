// call by address
#include<iostream>
using namespace std;
int swap(int *a , int *b) // *a = 10= &a = 100 = no. , *b = &b
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After Swap : " << endl;
    cout << "a = " << *a <<"\n"<< "b = " << *b << endl;
    return *a + *b;
}
int main()
{
    int a, b;
    cout << "Enter a & b : ";
    cin >> a >> b;
    cout << "Before Swap : " << endl;
    cout << "a = " << a<<"\n" << "b = " << b << endl;   
    swap(&a, &b); // a = 100 , b =  200
    // int sum = swap(&a,&b);
    cout << "Sum = " << a+b << endl;
    return 0;
}