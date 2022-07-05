// Parameterised constructor
// PAssing parameters from main Function to constructor
#include<iostream>
using namespace std;
class ParameterisedConstructor
{
    private:
    char name[34]; // Array of string (string in array type)
    int r_no;
    double per;
    public:
    ParameterisedConstructor()
    {
    
    }

};
int main()
{
    char name[34];
    int r_no;
    double per;
    getchar();
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your roll no. : ";
    cin >> r_no;
    cout << "Enter percentages : ";
    cin >> per;
}