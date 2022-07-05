#include<iostream>
using namespace std;
int main()
{
    int a, b,res;
    cout << "Enter a & b : ";
    cin >> a >> b;
    res = a + b;
    cout << "Result = " << res << endl;
    if(res<0 || res<=0)
    {
        cout << "Result is 0 " << endl;
    }
    else
    {
        if(res>0&&res<10||res<=10)
        {
            cout << "Result is <= 10" << endl;
        }
    else
    {
        cout << "Result is  >= 10 " << endl;
    }
    }
    return 0;
}