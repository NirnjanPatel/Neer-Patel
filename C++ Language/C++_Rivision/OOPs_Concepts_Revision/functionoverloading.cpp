// Function / method //Overloading
#include<iostream>
using namespace std;
class Greateramong3
{
    public:
void GreaterNum(int a,double b)
{
    int result = a > b ? a:b;
    cout << "Greater No. is " << result << endl;
}
void GreaterNum(double a,int b,double c)
{
    int result = (a>b)?(a>c?a:c):(b>c?b:c);
    cout << "Greater No. is " << result << endl;
}
};
int main()
{
    int a, b;
    Greateramong3 obj;
    obj.GreaterNum(12, 2.34334);
    obj.GreaterNum(1.676, 234334, 3433.666);
    return 0;
}