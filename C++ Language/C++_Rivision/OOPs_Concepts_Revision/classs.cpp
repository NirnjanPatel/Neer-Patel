// Adddition Subtraction Multiplication Division Modules
#include<iostream>
using namespace std;
class ArithmaticOperations
{
    private:
        double a, b, c;

    public:
        void setabc()
       {
    cout << "Enter a , b & c : ";
    cin >> a >> b >> c;

       }
    
    void Adddition()
    {
        cout << "Addition = " << a + b + c << endl;
    }
        void Subtraction()
    {
         cout << "Subtraction = " << a - b - c << endl;       
    }
        void Multiplication()
    {
         cout << "Multiplication = " << a * b * c << endl;   
    }
        void Division()
    {
     cout << "Division = " << a / b / c << endl;   
    }
        void Modules()
    {
        int a=12, b=23, c=34;
        cout << "Modules = " << a % b % c << endl;
    }
};
int main()
{
   // double a, b, c;
    
    ArithmaticOperations obj;
    obj.setabc();
    obj.Adddition();
    obj.Subtraction();
    obj.Multiplication();
    obj.Modules();
    obj.Division();
}