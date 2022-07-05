#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
 double a , b , c , sum , avg ;
 cout << "Enter Values of a , b & c : ";
 cin >> a >> b >> c;
 sum = a + b + c;
 cout << "Sum = " << sum << endl;
 avg = sum / 3;
 cout << "Average = " << avg << endl;
 cout << "Average = " << avg <<setprecision(2) << endl;
 cout << "Average = " << avg <<fixed<<setprecision(2) << endl; // Don't know what are they set...
 return 0;
}