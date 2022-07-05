// table using for loop
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin >> num;
    cout << "Table of no.is : " << endl;
    for (int i = 1; i <= 10;i++)
{   
cout<<num<<" * "<<i<<" = "<<num * i<< endl;
}
}